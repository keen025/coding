#include<stdio.h>

int check(int n){
	int chan=0,le=0;
	if(n%2!=0) return 0;
	while(n){
		int r=n%10;
		if(r%2==0) chan++;
		else le++;
		n/=10;
	}
	return chan>le;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
