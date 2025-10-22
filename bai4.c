#include <stdio.h>

void xepLoaiHocLuc(float van, float toan, float anh) {
    float diem = (van*2 + toan*2 + anh) / 5;
    printf("Diem trung binh: %.2f\n", diem);

    if (diem < 3)
        printf("Hoc luc: Yeu\n");
    else if (diem <= 5)
        printf("Hoc luc: Trung binh\n");
    else if (diem <= 7.9)
        printf("Hoc luc: Kha\n");
    else
        printf("Hoc luc: Gioi\n");
}

int main() {
    float van, toan, anh;
    printf("Nhap diem van, toan, anh: ");
    scanf("%f %f %f", &van, &toan, &anh);
    xepLoaiHocLuc(van, toan, anh);
    return 0;
}
