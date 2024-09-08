#include <stdio.h>

int main() {
    int a = 20; // Gán giá tr? m?c d?nh cho bi?n a
    int b = 9;  // Gán giá tr? m?c d?nh cho bi?n b

    // Th?c hi?n các phép toán co b?n và in k?t qu? lên màn hình
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    // Ki?m tra tru?ng h?p chia cho 0 tru?c khi th?c hi?n phép chia
    if (b != 0) {
        printf("a / b = %1.lf\n", (double)a / b);
    } else {
        printf("Không th? chia cho 0.\n");
    }

    return 0;
}

