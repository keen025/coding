#include <stdio.h>
#include <math.h>
void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
void selecsort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
}
int main(){
	int n;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("[%d,%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("in ra ma tran la:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d	",a[i][j]);
		}
		printf("\n\n");
	}
	int p=1;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			p *= a[i][j];
		}
	}
	printf("tich cac phan tu phia tren dcc la: %d\n",p);
	int check = 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i] != 0){
				check = 0;
				break;
			}
		}
	}
	if(check) printf("la ma tran tam giac tren\n");
	else printf("ko phai ma tran tam giac tren\n");
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += a[i][n-1-i];
	}
	printf("tong cac phan tu tren dcp la %d\n",sum);
	return 0;
	
}
