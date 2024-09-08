#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	float x[n], y[n];
	//nhap,xuat
	printf("nhap hoanh do cua tung diem:\n");
	for(int i=0;i<n;i++){
		printf("x[%d]=",i);
		scanf("%f",&x[i]);
	}
	getchar();
	printf("nhap tung do cua tung diem:\n");
	for(int i=0;i<n;i++){
		printf("y[%d]=",i);
		scanf("%f",&y[i]);
	}
	for(int i=0;i<n;i++){
		printf("(%.2f;%.2f) ",x[i],y[i]);
	}
	
	printf("\n");
	//dem so diem thuoc goc phan tu I
	
	int dem=0;
	for(int i=0;i<n;i++){
		if(x[i] >0 && y[i] >0){
			dem++;
		}
	}
	if(dem==0){
		printf("khong co diem nao thoa man");
	}else printf("co %d diem thuoc goc phan tu I", dem);
	printf("\n");
	//tinh khoang cach
	
	double sum = sqrt(pow((x[n-1]-x[0]),2) + pow((y[n-1]-y[0]),2));
	for(int i=0;i<n;i++){
		
		sum += sqrt(pow((x[i]-x[i+1]),2) + pow((y[i]-y[i+1]),2));
	}
	printf("S=%.2lf",sum);
	return 0;
}
