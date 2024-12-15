#include <stdio.h>

void capNhatPhanTu(int *arr, int n, int viTri, int giaTriMoi) {
    if (viTri < 0 || viTri >= n) {
        printf("Vi tri %d khong hop le.\n", viTri);
        return;
    }
    *(arr + viTri-1) = giaTriMoi;
}

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int n = sizeof(mang) / sizeof(mang[0]);
    printf("Mang ban dau: ");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    int viTri;
    int giaTriMoi;
    printf("Nhap vi tri : ");
    scanf("%d",&viTri);
    printf("Nhap gia tri moi: ");
    scanf("%d",&giaTriMoi);
    capNhatPhanTu(mang, n, viTri, giaTriMoi);

    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    
    printf("\n");
    return 0;
}

