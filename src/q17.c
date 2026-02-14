// Create an expression that checks if a given character is an uppercase letter.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an uppercase letter\n");
    } else {
        printf("The character is NOT an uppercase letter\n");
    }

    return 0;
}
