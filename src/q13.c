// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num / 2) * 2 == num && (num / 3) * 3 == num) {
        printf("The number is divisible by both 2 and 3\n");
    } else {
        printf("The number is NOT divisible by both 2 and 3\n");
    }

    return 0;
}
