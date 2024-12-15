#include <stdio.h>

int timKiemPhanTu(int arr[], int n, int giaTri) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == giaTri) {
            return i;
        }
    }
    return -1;
}

int main() {
    int mang[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(mang) / sizeof(mang[0]);
    int giaTriCanTim;
    printf("Nhap gia tri can tim : ");
    scanf("%d",&giaTriCanTim);
    int viTri = timKiemPhanTu(mang, n, giaTriCanTim);

    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", giaTriCanTim, viTri);
    } else {
        printf("Phan tu %d khong tim thay.\n", giaTriCanTim);
    }

    return 0;
}

