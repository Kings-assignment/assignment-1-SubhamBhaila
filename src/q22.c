// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, result;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    result = round(sqrt(a + b));

    printf("Result = %.0lf\n", result);

    return 0;
}
