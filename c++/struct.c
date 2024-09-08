#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct sv{
	char name[100];
	char birth[100];
	char addres[100];
	float gpa;
	int stt;
}sv;
void in(sv x){
	printf("%s %s %s %.2f\n",x.name,x.birth,x.addres,x.gpa);
}
int comp(const void *a,const void *b){
	sv *x=(sv*)a;
	sv *y=(sv*)b;
	if(strcmp(x->addres,y->addres)==0){
		if(x->gpa < y->gpa) return -1;
		else return 1;
	}else return strcmp(x->name,y->name);
}
int month(char birth[]){
	char t[100];
	strcpy(t,birth);
	char *token = strtok(t,"/");
	token = strtok(NULL,"/");
	if(atoi(token)==4) return 1;
	else return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	sv a[n];	
	for(int i=0;i<n;i++){
		getchar();
		gets(a[i].name);
		gets(a[i].birth);
		gets(a[i].addres);
		scanf("%f",&a[i].gpa);
		a[i].stt=i;	
	}
	for(int i=0;i<n;i++){
		if(month(a[i].birth))
			in(a[i]);
	}
	return 0;
}
