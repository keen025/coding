#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	int x[t];
	for(int i=0;i<t;i++){
		scanf("%d",&x[i]);
	}
	printf("\n");
	int sum[t];
	for(int i=0;i<t;i++){
		sum[i] = 0;
	}
	for(int i=0;i<t;i++){
		for(int j=1;j<x[i];j++){
			if(x[i]%j==0){
				sum[i] += j;
			}
		}
		printf("%d\n",sum[i]);
	}
}
