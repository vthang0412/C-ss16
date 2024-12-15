#include <stdio.h>

void inMang(int *arr, int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printf("Cac phan tu trong mang la: ");
    inMang(arr, n);
    return 0;
}

void inMang(int *arr, int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%3d ", *(arr + i));
    }
    printf("\n");
}

