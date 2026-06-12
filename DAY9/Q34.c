#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    // Outer loop starts at n and decrements down to 1
    for (int i = n; i >= 1; i--) {
        
        // Inner loop prints 'i' stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d",j);
        }
        
        // Move to the next line after printing all stars in the row
        printf("\n");
    }

    return 0;
}