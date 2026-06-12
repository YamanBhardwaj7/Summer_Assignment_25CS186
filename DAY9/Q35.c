#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    char ch = 'A'; // Starting character

    // Outer loop handles the rows
    for (int i = 1; i <= n; i++) {
        
        // Inner loop prints the current character 'i' times
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        
        // Move to the next character for the next row
        ch++; 
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}