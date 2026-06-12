#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    // Outer loop starts at n and decrements down to 1
    for (int i = 0; i <= n; i++) {
        
        // Inner loop prints 'i' stars for the current row
        for (int j = 0; j <= n; j++) {
            if(i==0|| j==0||i==n||j==n)
            printf("*");
            else{
                printf(" ");
            }
        }
        
        // Move to the next line after printing all stars in the row
        printf("\n");
    }

    return 0;
}