#include <stdio.h>

int main(void)
{
    int numbers[] = {9, 8, 4, 78, 32, 1};
    int n;

    printf("Enter a Number: \n"); // Added \n here to keep it clean
    scanf("%d", &n);              // Normal %d is fine here

    // Crucial: The \n at the end forces Pop!_OS to show the text instantly!
    printf("enter number is %d\n", n);

    return 0; // Properly closes the program
}
