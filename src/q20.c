// Write an expression that checks if a number is a multiple of either 3 or 5.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 || num % 5 == 0) {
        printf("The number is a multiple of 3 or 5\n");
    } else {
        printf("The number is NOT a multiple of 3 or 5\n");
    }

    return 0;
}
