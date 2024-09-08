#include <stdio.h>
#include <math.h>
#include <string.h>



int main() {
    int n;
    scanf("%d",&n);
    double sum=0;
    double e=0.000001;
    for(int i=1;i<=n;i++)
    {
		if(fabs(1.0/i)<=e) break;
    	if(i%2==0) sum-= 1.0/i;
    	else sum+= 1.0/i;
    	
	}
	printf("%.4lf",sum);
    return 0;
}
