// Write an expression that checks if a number is both positive and even.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && num % 2 == 0) {
        printf("The number is positive and even\n");
    } else {
        printf("The number is NOT positive and even\n");
    }

    return 0;
}
