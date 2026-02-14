// Given a variable num, write an expression that checks if it is a power of 2.
// You can you math header file for this (eg: #include <math.h>)
#include <math.h>
#include <stdio.h>

int main() {
    int num = 16;

    if (num > 0 && floor(log2(num)) == ceil(log2(num))) {
        printf("%d is a power of 2\n", num);
    } else {
        printf("%d is not a power of 2\n", num);
    }

    return 0;
}
