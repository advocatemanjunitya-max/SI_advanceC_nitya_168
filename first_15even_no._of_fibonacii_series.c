#include <stdio.h> 
 
int main() { 
    int count = 0; 
    unsigned long long t1 = 0, t2 = 1, nextTerm; 
     
    printf("The first 15 Even Fibonacci numbers are:\n"); 
     
    // Check if the starting zero is considered even 
    if (t1 % 2 == 0) { 
        printf("%llu ", t1); 
        count++; 
    } 
     
    while (count < 15) { 
        nextTerm = t1 + t2; 
        t1 = t2; 
        t2 = nextTerm; 
         
        // If the newly generated term leaves no remainder with 2 
        if (nextTerm % 2 == 0) { 
            printf("%llu ", nextTerm); 
            count++; 
        } 
    } 
    printf("\n"); 
    return 0; 
} 
 