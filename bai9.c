#include <stdio.h>

void nhapTu1DenN(int n) {
    int so, hopLe;
    do {
        hopLe = 1;
        for (int i = 1; i <= n; i++) {
            printf("Nhap so thu %d: ", i);
            scanf("%d", &so);
            if (so != i) {
                printf("Sai! Phai nhap lai tu dau!\n\n");
                hopLe = 0;
                break;
            }
        }
    } while (!hopLe);
    printf("Ban da nhap dung tu 1 den %d!\n", n);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    nhapTu1DenN(n);
    return 0;
}
