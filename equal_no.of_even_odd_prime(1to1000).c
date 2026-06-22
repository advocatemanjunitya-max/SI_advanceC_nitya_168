#include <stdio.h> 
 
int main() { 
    printf("Numbers between 1 and 1000 with equal counts of odd, even, and prime 
digits:\n"); 
     
    for (int i = 1; i <= 1000; i++) { 
        int temp = i; 
        int oddCount = 0; 
        int evenCount = 0; 
        int primeCount = 0; 
         
        while (temp > 0) { 
            int digit = temp % 10; 
             
            // 1. Tally Even vs Odd 
            if (digit % 2 == 0) { 
                evenCount++; 
            } else { 
                oddCount++; 
            } 
             
            // 2. Tally single-digit Primes (2, 3, 5, or 7) 
            if (digit == 2 || digit == 3 || digit == 5 || digit == 7) { 
                primeCount++; 
            } 
             
            temp /= 10; 
        } 
         
        // 3. Confirm all scores match exactly and are greater than zero 
        if (oddCount == evenCount && evenCount == primeCount && oddCount > 0) { 
            printf("%d ", i); 
        } 
    } 
    printf("\n"); 
    return 0; 
} 
 
