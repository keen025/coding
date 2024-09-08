#include<stdio.h>
//mergesort
//merge,tron cac phan tu chi so l->mid,mid+1->r thanh day tang dan
void merge(int a[],int l,int m,int r){
	//luu phan tu l->m,m+1->r thanh 2 mang
	int n1=m-l+1,n2=r-m;
	int x[n1],y[n2];
	for(int i=0;i<n1;i++){
		x[i] = a[l+i];
	}
	for(int i=0;i<n2;i++){
		y[i] = a[m+1+i];
	}
	//tron 2 mang x,y roi gan lai cho mang a[l,r]
	int idx=l;
	int i=0,j=0;
	while(i<n1&&j<n2){
		if(x[i]<=y[j])
			a[idx++] = x[i++];
		else
			a[idx++] = y[j++];
	}
	while(i<n1) 
		a[idx++] = x[i++];
	while(j<n2) 
		a[idx++] = y[j++];
	
}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m = (l+r)/2;
		mergesort(a,l,m); //de quy nua trai
		mergesort(a,m+1,r); //de quy nua phai
		merge(a,l,m,r);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",a+i);
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}
