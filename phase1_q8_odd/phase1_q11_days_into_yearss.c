#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;
 printf("Enter total number of days: ");
    scanf("%d", &totalDays);
 years = totalDays / 365;
    totalDays = totalDays % 365;
 weeks = totalDays / 7;
    days = totalDays % 7;
 printf("\nYears = %d", years);
    printf("\nWeeks = %d", weeks);
    printf("\nDays = %d\n", days);
 return 0;
}