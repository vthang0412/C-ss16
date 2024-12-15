#include <stdio.h>

void doiGiaTri(int *a, int *b);

int main() {
    int x = 83, y = 86;
    printf("Truoc khi doi gia tri: x = %d, y = %d\n", x, y);
    doiGiaTri(&x, &y);
    printf("Sau khi doi gia tri: x = %d, y = %d\n", x, y);
    return 0;
}

void doiGiaTri(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

