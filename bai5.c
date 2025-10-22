#include <stdio.h>

void tinhTienDien(int soDien) {
    int tien = 0;

    if (soDien <= 100)
        tien = soDien * 500;
    else if (soDien <= 350)
        tien = 100*500 + (soDien - 100)*550;
    else if (soDien <= 650)
        tien = 100*500 + 250*550 + (soDien - 350)*650;
    else
        tien = 100*500 + 250*550 + 300*650 + (soDien - 650)*700;

    printf("So tien dien phai tra: %d dong\n", tien);
}

int main() {
    int soDien;
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &soDien);
    tinhTienDien(soDien);
    return 0;
}
