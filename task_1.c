#include <stdio.h>
int triangleType(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return 0;
    }
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        return 1;
    }
    return 2;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int answer = triangleType(a, b, c);

    if (answer == 0) {
        printf("0(такого треугольника не может существовать)\n");
    } 
    else if (answer == 1) {
        printf("1(треугольник прямоугольный)\n");
    } 
    else {
        printf("2(иначе)\n");
    }
}
