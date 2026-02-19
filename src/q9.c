// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"

#include <stdio.h>

int main() {
    int days, weeks, remainingDays;

    printf("Enter number of days: ");
    scanf("%d", &days);

    weeks = days / 7;
    remainingDays = days % 7;

    printf("%d week and %d days\n", weeks, remainingDays);

    return 0;
}