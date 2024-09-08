#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	double a[n];
	//nhap,xuat
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%.1lf ",a[i]);
	}
	printf("\n");
	
	//dem phan tu thoa man
	int dem=0;
	for(int i=0;i<n-1;i++){
		double t= a[i]*a[i+1];
		if(t>=5.0 && t<=15.0){
			dem++;
		}
	}
	if(dem==0) printf("khong co phan tu nao thoa man\n");
	else printf("so phan tu thoa man la: %d\n",dem);
	
	//tinh tong
	int x;
	printf("nhap gia tri x: ");
	scanf("%d",&x);
	double sum=0;
	for(int i=0;i<n;i++){
		sum += a[i] * pow(x,i);
	}
	printf("S= %.2lf\n",sum);
	
	//tim 3 phan tu nho nhat
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				double t=a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	printf("sau khi xap xep\n");
	for(int i=0;i<n;i++){
		printf("%.2lf ",a[i]);
	}
	printf("\n");
	int count = 0;
	for(int i=0;i<n;i++){
		if(abs(a[i]) >= 2.0){
			count++;
		}
		if(count >= 3){
			break;
		}
		printf("%.2lf ",a[i]);
	}
	

	return 0;
}
