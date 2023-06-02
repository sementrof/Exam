#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float sr;
    scanf("%d", &num);

    while (num != 0) {
        if (num % 2 == 0) { 
            sum += num; 
             count++; }
    
    scanf("%d", &num);
    }

    sr =  sum / count; 
    printf("%.1f\n", sr);
    return 0;
}