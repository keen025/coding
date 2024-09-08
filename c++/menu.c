#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct Sinhvien{
	char ten[100];
	char lop[100];
	float gpa;
}Sinhvien;

void nhap(Sinhvien *x){
	printf("Nhap ten: "); gets(x->ten);
	printf("Nhap lop: "); gets(x->lop);
	printf("Nhap diem: "); scanf("%f",&x->gpa);
}
void in(Sinhvien x){
	printf("%s %s %.2f\n",x.ten,x.lop,x.gpa);
}
void timten(Sinhvien a[],int n,char name[]){
	int check=0;
	for(int i=0;i<n;i++){
		if(strcmp(name,a[i].ten)==0){
			in(a[i]);
			check=1;
		}
	}
	if(check==0) printf("NOT found");
}
void maxGPA(Sinhvien a[],int n){
	float max=-1;
	for(int i=0;i<n;i++){
		max = fmax(a[i].gpa,max);
	}
	for(int i=0;i<n;i++){
		if(a[i].gpa==max){
			in(a[i]);
		}
	}
}
void xoathongtin(Sinhvien a[],int *n,char name[]){
	for(int i=0;i<*n;i++){
		if(strcmp(a[i].ten,name)==0){
			for(int j=i;j<*n-1;j++){
				a[j] = a[j+1];
			}
			(*n)--;
		}
	}
}
int comparator(const void *a,const void *b){
	Sinhvien *x = (Sinhvien*)a;
	Sinhvien *y = (Sinhvien*)b;
	if(x->gpa < y->gpa) return -1;
	else return 1;
}
int main(){
	
	while(1){
		int n;
		Sinhvien a[100];
		printf("--------------MENU--------------\n");
		printf("[1].Nhap danh sach sinh vien.\n");
		printf("[2].In ra thong tin sinh vien.\n");
		printf("[3].Liet ke sinh vien co diem gpa cao nhat.\n");
		printf("[4].Xoa thong tin sinh vien theo ten.\n");
		printf("[5].Xap xep sinh vien theo thu tu tang dan.\n");
		printf("[6].Exit.\n");
		printf("--------------------------------\n\n");
		printf("Nhap lua chon: ");
		int choose;
		scanf("%d",&choose);
		getchar();
		if(choose==1){
			printf("Nhap so luong sinh vien: ");
			scanf("%d",&n);
			for(int i=0;i<n;i++){
				getchar();
				nhap(&a[i]);
			}
		}else if(choose==2){
			printf("Thong tin sinh vien:\n");
			for(int i=0;i<n;i++){
				in(a[i]);
			}
		}else if(choose==3){
			maxGPA(a,n);
		}else if(choose==4){
			char name[100];
			printf("Nhap ten sinh vien can xoa: ");
			gets(name);
			xoathongtin(a,&n,name);
		}else if(choose==5){
			qsort(a,n,sizeof(Sinhvien),comparator);
			printf("Da xap xep\n");
		}else if(choose==6){
			break;
		}
	}
	return 0;
}
