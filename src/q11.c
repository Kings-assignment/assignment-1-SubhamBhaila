// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = (++num * 3) - 10;

    printf("Result = %d\n", num);

    return 0;
}
