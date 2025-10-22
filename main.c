#include "mylib.h"

void menu(){
    printf("*** MENU ***\n");
    printf("1- Xem ngay cua thang\n");
    printf("2- Kiem tra nam nhuan\n");
    printf("3. Giai phuong trinh bac 2\n");
    printf("4. Xep loai hoc luc\n");
    printf("5. Tinh tien dien\n");
    printf("6. In bang cuu chuong\n");
    printf("7. Tinh giai thua\n");
    printf("8. Hien thi mau so theo x\n");
    printf("9. Nhap tu 1 den n dung thu tu\n");
    printf("10. In day Fibonacci nho hon n\n");
    printf("11. In tam giac sao\n");
    printf("------------------\n");
    printf("chon STT chuc nang: \n");
    printf("------------------\n");
    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        xemthang();
        menu();
        break;
    case 2:
        namnhuan();
        menu();
        break;
    case 3:
        giaiPTB2();
        break;
    case 4:
        xepLoai();
        break;
    case 5:
        tinhTienDien();
        break;
    case 6:
        bangCuuChuong();
        break;
    case 7:
        giaiThua();
        break;
    case 8:
        hienThi();
        break;
    case 9:
        nhapDungThuTu();
        break;
    case 10:
        inFibo();
        break;
    case 11:
        inTamGiac();
        break;
    default:
        menu();
        break;
    }

}

int main(){
    menu();
    return 0;
}
