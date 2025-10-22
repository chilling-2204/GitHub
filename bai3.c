#include <stdio.h>
#include <math.h>

void giaiPTB2(float a, float b, float c) {
    float delta = b*b - 4*a*c;

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo nghiem\n");
        else
            printf("Phuong trinh co 1 nghiem: x = %.2f\n", -c/b);
    } else if (delta < 0)
        printf("Phuong trinh vo nghiem\n");
    else if (delta == 0)
        printf("Phuong trinh co nghiem kep: x = %.2f\n", -b/(2*a));
    else {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("Phuong trinh co 2 nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}

