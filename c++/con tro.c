#include<stdio.h>
#include<stdlib.h>
int comparator(const void *a,const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}
int main(){
	char a[1000];
	fgets(a,5,stdin);
	printf("%s",a);
	return 0;
}
