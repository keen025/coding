#include <stdio.h>

int main() {
    double chieu_dai, chieu_rong;

   
    printf("Nhap chieu dài cua hinh chu nhat: ");
    scanf("%lf", &chieu_dai);
    printf("Nhap chieu rong cua hinh chu nhat: ");
    scanf("%lf", &chieu_rong);

    
    double chu_vi = 2 * (chieu_dai + chieu_rong);
    double dien_tich = chieu_dai * chieu_rong;

    
    printf("Chu vi cua hinh chu nhat là: %1.lf\n", chu_vi);
    printf("Dien tich cua hinh chu nhat là: %1.lf\n", dien_tich);

    return 0;
}

