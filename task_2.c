
#include <stdio.h>

float sumFoo(int n) {
    float sum = 0;
    int rex = 1;
    for (int i = 1; i <= n; i++) {
        rex *= i;
        sum += ((float)i * (float)i) / rex;
    }
    return sum + 1; 
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.2f\n", sumFoo(n));
    return 0;
}