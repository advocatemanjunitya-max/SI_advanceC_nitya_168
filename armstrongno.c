#include <stdio.h>
#include <math.h>

int main() {
    int n, rem, count = 0, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Count the number of digits
    for (int temp = n; temp > 0; temp /= 10) {
        count++;
        // printf("\n %d ", count); // Uncomment for debugging
    }

    // Check if the number is an Armstrong number
    for (int temp = n; temp > 0; temp /= 10) {
        rem = temp % 10;
        int power = pow(rem, count); // Calculate the power inside the loop
        sum += power; // Accumulate the sum inside the loop
    }

    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}
