#include <stdio.h>

int main(){
	float toan, ly, hoa;
	
	printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &hoa);
    
    float tong_diem = toan + ly + hoa;
    
    if (tong_diem >= 15 && toan >= 4 && ly >= 4 && hoa >= 4) {
    	if (toan > 5 && ly > 5 && hoa > 5) {
    		printf("hoc deu cac mon");
		} else {
            printf("dau \n");
        }
    } else {
        printf("Thi hong \n");
    }

	return 0;
}
