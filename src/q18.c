// Write a C expression that calculates the sum of the squares of three different numbers.

#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a*a + b*b + c*c;

    printf("Sum of squares = %d\n", sum);

    return 0;
}
