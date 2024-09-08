#include <stdio.h>
#include <math.h>
#define ll long long
#define Pi 3.14
#include <stdbool.h>
#include <string.h>
#include<stdlib.h>
void swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int cp(ll n){
	if((int)sqrt(n) == sqrt(n)) return 1;
	else return 0;
}
int prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;		
	}
	return n>1;
}
long long fac(int n){
	long long gt=1;
	for(int i=1;i<=n;i++){
		gt*=i;
	}
	return gt;
}
int tong(int b[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum += b[i];
	}
	return sum;
}
int tonguoc(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum += i;
			if(n/i != i){
				sum += n/i;
			}
		}
	}
	return sum;
}
int perfectnum(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum += i;
			if(i != n/i) sum += n/i;
		}
	}
	if(sum - n == n) return 1;
	else return 0;
}
void fact(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			// i la thua so nguyen to
			while(n%i==0){
				printf("%d ",i);
				n/=i;
			}
			
		}
	}
	//neu chua phan tich thua so nguyen to xong
	if(n!=1) printf("%d ",n);
}
void fact2(ll n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int mu=0;
			while(n%i==0){
				mu++;
				n/=i;
			}
			printf("%d^%d",i,mu);
			if(n!=1) printf(" * ");
		}
	}
	if(n>1) printf("%d^1",n);
}
int ucln(int a,int b){
	while(b!=0){
		int r = a%b;
		a=b;
		b=r;
	}
	return a;
}
int bcnn(int a,int b){
	return a*b / ucln(a,b);
}
int tn(ll n){
	ll lat=0,t=n;
	while(n>0){
		lat = lat*10 + n%10;
		n/=10;
	}
	if(t==lat) return 1;
	else return 0;
}
int sphenic(ll n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		int mu=0;
		if(n%i==0){
			while(n%i==0){
				n/=i;
				mu++;
			}
			if(mu>=2) return 0;
			dem++;
		}
	}
	if(n>1){
		dem++;
	}
	if(dem==3) return 1;
	else return 0;
}
int thuan_nghich(int n){
    int m = 0, tmp = n;
    while(n != 0){
        m = m * 10 + n % 10; 
        n /= 10;
    }
    if(tmp == m){ 
        return 1;
    }
    return 0;
}
void selection(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				swap(&a[i],&a[j]);	
			}
		}
	}
}

long long c2(int k,int n){
	return fac(n)/(fac(k)*fac(n-k));
}
int check(int n){
	while(n){
		int r=n%10;
		n/=10;
		if(r<n%10) return 0;
	}
	return 1;
}
typedef struct monhoc{
	char ten[50];
	char thangdiem[2];
	int sotin;
	double diem;
}monhoc;
int main() {
	int n;
	scanf("%d",&n);
	getchar();
	monhoc a[n];
	printf("Nhap thong tin cac mon hoc.\n");
	for(int i=0;i<n;i++){
		printf("\nNhap ten mon hoc thu %d: ",i+1);
		gets(a[i].ten);
		printf("Nhap thang diem mon hoc thu %d theo bang chu cai: ",i+1);
		gets(a[i].thangdiem);
		printf("Nhap so tin chi mon hoc thu %d: ",i+1);
		scanf("%d",&a[i].sotin);
		if(strcmp(a[i].thangdiem,"A+")==0) a[i].diem = 4;
		else if(strcmp(a[i].thangdiem,"A")==0) a[i].diem = 3.8;
		else if(strcmp(a[i].thangdiem,"B+")==0) a[i].diem = 3.5;
		else if(strcmp(a[i].thangdiem,"B")==0) a[i].diem = 3;
		else if(strcmp(a[i].thangdiem,"C+")==0) a[i].diem = 2.5;
		else if(strcmp(a[i].thangdiem,"C")==0) a[i].diem = 2;
		else if(strcmp(a[i].thangdiem,"D+")==0) a[i].diem = 1.5;
		else if(strcmp(a[i].thangdiem,"D")==0) a[i].diem = 1;
		else if(strcmp(a[i].thangdiem,"F+")==0) a[i].diem = 0.5;
		else if(strcmp(a[i].thangdiem,"F")==0) a[i].diem = 0;
		getchar();
	}
	printf("\nThong tin tung mon hoc la:\n");
	for(int i=0;i<n;i++){
		printf("%s, %d tin chi, %s \n",a[i].ten,a[i].sotin,a[i].thangdiem);
	}
	double sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		sum1+= (a[i].sotin*a[i].diem);
		sum2+=a[i].sotin;
	}

	double gpa= sum1 / sum2;
	printf("\nGPA: %.2lf",gpa);
    return 0;
}
