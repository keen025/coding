#include<stdio.h>

int mark[1000001];
int check(int a[],int n){
	if(n%2==0){
		for(int i=0;i<n;i++){
			if(mark[a[i]]){
				if(mark[a[i]]%2==0){
					mark[a[i]]=0;
				}else{
					mark[a[i]]=0;
					return 0;
				}
			}
		}
		return 1;
	}else{
		if(mark[a[n/2]]%2==0) return 0;
		mark[a[n/2]]=0;
		for(int i=0;i<n;i++){
			if(mark[a[i]]){
				if(mark[a[i]]%2==0){
					mark[a[i]]=0;
				}else{
					mark[a[i]]=0;
					return 0;
				}
			}
		}
		return 1;
	}
	
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    	int n; scanf("%d",&n);
    	int a[n];
    	for(int i=0;i<1000001;i++) mark[i]=0;
    	for(int i=0;i<n;i++){
    		scanf("%d",a+i);
    		mark[a[i]]++;
		}
		if(check(a,n)) printf("28tech\n");
		else printf("29tech\n");
		
	}
	return 0;
}
