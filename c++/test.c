#include <stdio.h>

int main() {
	float chieu_dai, chieu_rong;
	
	printf("nhap chieu dai cua hinh chu nhat: ");
	scanf("%f", &chieu_dai);
	
	printf("nhap chieu rong cua hinh chu nhat: ");
	scanf("%f", &chieu_rong);
	
	printf("chu vi la : .1%f\n", 2*(chieu_dai + chieu_rong ) );
	printf("dien tich la : .1%f\n", chieu_dai * chieu_rong);
	
	return 0;
	
	
	
}


