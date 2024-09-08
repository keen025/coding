#include <stdio.h>
#include <math.h>
int main(){
    long long n;
    scanf("%lld", &n);
    long long x=1ll*ceil(1.0*n/3)+1ll*ceil(1.0*n/5)-1ll*ceil(1.0*n/15);
    printf("%lld", x);
    printf("\n%lld",n/3+n/5-n/15);
}
