#include <stdio.h>

int main() {
    int a = 20; // G�n gi� tr? m?c d?nh cho bi?n a
    int b = 9;  // G�n gi� tr? m?c d?nh cho bi?n b

    // Th?c hi?n c�c ph�p to�n co b?n v� in k?t qu? l�n m�n h�nh
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    // Ki?m tra tru?ng h?p chia cho 0 tru?c khi th?c hi?n ph�p chia
    if (b != 0) {
        printf("a / b = %1.lf\n", (double)a / b);
    } else {
        printf("Kh�ng th? chia cho 0.\n");
    }

    return 0;
}

