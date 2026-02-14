// Given two variables x and y, write an expression that calculates the average of their values.

#include <stdio.h>

int main() {
    float x, y, average;

    printf("Enter values of x and y: ");
    scanf("%f %f", &x, &y);

    average = (x + y) / 2;

    printf("Average = %.2f\n", average);

    return 0;
}
