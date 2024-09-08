#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int comparator(const void *a,const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x, y);
}
int rev(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<=r){
		if(c[l]!=c[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int check(char c[]){
	int r=c[strlen(c)-1]-'0';
	if(r%2!=0) return 0;
	int sum=0;
	for(int i=0;i<strlen(c);i++){
	    sum+=c[i]-'0';
	}
	if(sum%3==0) return 1;
	else return 0;
}
void nguoc(char s[]){
    char tmp[10001];
    strcpy(tmp,s);
    int l=0,r=strlen(tmp)-1;
    while(l<=r){
        char t;
        t=tmp[l];
        tmp[l]=tmp[r];
        tmp[r]=t;
        l++; r--;
    }
    printf("%s\n",tmp);
}
void thuong(char s[]){
    char tmp[10001];
    strcpy(tmp,s);
    for(int i=0;i<strlen(tmp);i++){
        tmp[i] = tolower(tmp[i]);
    }
    printf("%s\n",tmp);
}
void hoa(char s[]){
    char tmp[10001];
    strcpy(tmp,s);
    for(int i=0;i<strlen(tmp);i++){
        tmp[i] = toupper(tmp[i]);
    }
    printf("%s\n",tmp);
}
int main(){
	char s[10001];
    fgets(s,10001,stdin);
    s[strlen(s)-1]='\0';
    nguoc(s);
    
	return 0;
}
