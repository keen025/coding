#include <stdio.h>
#include <math.h>
// a=a+b tuong duong a+=b
// a=a-b             a-=b
// a=a*b             a*=b
// a=a/b             a/=b
// a=a%b             a%=b
// a==b ss bang
// a>b lon hon
// a<b nho hon
// a>=b lon or bang
// a<=b nho or bang
// a!=b ss khac
// &&:va, ||:or, !:ko phai
// sqrt(): can bac 2
// cbrt(): can bac 3
// pow(x, y) : x^y
// abs() : tri tuyet doi
int main() {
	int m;
	scanf("%d", &m);
	
	if((4<=m) && (m<=15)){
		printf("m thuoc khoang [4,15]");
	}
	else {
		printf("m ko thuoc khoang [4,15]");
	}	

	return 0;
}
