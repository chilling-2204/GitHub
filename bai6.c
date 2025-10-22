#include <stdio.h>

void inBangCuuChuong(int n) {
    printf("Bang cuu chuong %d:\n", n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
}

int main() {
    int n;
    printf("Nhap so chuong: ");
    scanf("%d", &n);
    inBangCuuChuong(n);
    return 0;
}
