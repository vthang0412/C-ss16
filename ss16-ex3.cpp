#include <stdio.h>

void tinhTong(int *a, int *b, int *ketqua);

int main() {
    int x,y;
    printf("Nhap so thu nhat: ");
    scanf("%d",&x);
    printf("Nhap so thu hai: ");
    scanf("%d",&y);
    int ketqua;
    tinhTong(&x, &y, &ketqua);
    printf("Tong cua %d + %d la: %d\n", x, y, ketqua);
    return 0;
}

void tinhTong(int *a, int *b, int *ketqua) {
    *ketqua = *a + *b;
}

