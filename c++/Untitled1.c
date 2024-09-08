#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int comp(const void *a,const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x,y);
}
void chuan(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		c[i] = tolower(c[i]);	
	}
}
int main() {
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
    	char s[1000];
	    fgets(s,1000,stdin);
	    s[strlen(s)-1]='\0';
	    for(int i=0;i<strlen(s);i++){
	    	s[i]=tolower(s[i]);
		}
	    char *token=strtok(s," ");
	    char tu[100][50];
	    int n=0;
	    while(token!=NULL){
	    	strcpy(tu[n],s);
	    	n++;
	    	token=strtok(NULL," ");
		}
		printf("%s",tu[n-2]);
		for(int i=0;i<n-2;i++){
			printf("%c",tu[i][0]);
		}
		printf("xyz@edu.vn\n");
		token=strtok(tu[n-1],"/");
		while(token!=NULL){
			int num=atoi(token);
			printf("%d",num);
			token=strtok(NULL,"/");
		}
		printf("\n");
	}
	
    return 0;
}
