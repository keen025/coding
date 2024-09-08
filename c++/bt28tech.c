#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int comp(const void *a,const void *b){
	char *x=(char*)a;
	char *y=(char*)b;
	return *y-*x;
}

int main(){
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	qsort(a,n,sizeof(int),comp);
	printf("%d ",a[0]);
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			printf("%d",a[i]);
			return 0;
		}
	}
	return 0;
}
