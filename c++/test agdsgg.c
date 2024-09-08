#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if(n == 0) return 1;
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    float S = 2023;
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        int sign = pow(-1, i); 
        float denom = i * 1.0 + factorial(i);
        S += sign * pow(n, i-1) / denom;
    }
    
    printf("%.2f", S);
    
    return 0;
}
