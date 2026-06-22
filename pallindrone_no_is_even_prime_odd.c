#include <stdio.h> 
 
int main() { 
    int limit = 200;
     // Scanner testing limit range 
     
    // 1. EVEN PALINDROMES 
    printf("--- Palindrome Even Numbers up to %d ---\n", limit); 
    for (int i = 1; i <= limit; i++) { 
        if (i % 2 == 0) { // If even 
            int reversed = 0, temp = i; 
            while (temp > 0) { 
                reversed = (reversed * 10) + (temp % 10); 
                temp /= 10; 
            } 
            if (i == reversed) printf("%d ", i); 
        } 
    } 
     
    // 2. ODD PALINDROMES 
    printf("\n\n--- Palindrome Odd Numbers up to %d ---\n", limit); 
    for (int i = 1; i <= limit; i++) { 
        if (i % 2 != 0) { // If odd 
            int reversed = 0, temp = i; 
            while (temp > 0) { 
                reversed = (reversed * 10) + (temp % 10); 
                temp /= 10; 
            } 
            if (i == reversed) printf("%d ", i); 
        } 
    } 
     
    // 3. PRIME PALINDROMES 
    printf("\n\n--- Palindrome Prime Numbers up to %d ---\n", limit); 
    for (int i = 1; i <= limit; i++) { 
        // Check for Prime first 
        int isPrime = 1; 
        if (i <= 1) isPrime = 0; 
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) { 
                isPrime = 0; 
                break; 
            } 
        } 
         
        // If it is prime, check if it is a Palindrome 
        if (isPrime) { 
            int reversed = 0, temp = i; 
            while (temp > 0) { 
                reversed = (reversed * 10) + (temp % 10); 
                temp /= 10; 
            } 
            if (i == reversed) printf("%d ", i); 
        } 
    } 
    printf("\n"); 
    return 0; 
} 
 