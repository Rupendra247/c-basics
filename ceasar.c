#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool only_digits(char *s);
char rotate(char c, int k);

int main(int argc, char *argv[])
{
    // Must have exactly one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // That argument must be all digits
    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int k = atoi(argv[1]);

    char plaintext[1000];
    printf("plaintext:  ");
    scanf("%[^\n]", plaintext);
    
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        printf("%c", rotate(plaintext[i], k));
    }
    printf("\n");

    return 0;
}

// Returns true if every character in s is a decimal digit
bool only_digits(char *s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

// Rotates a single character by k positions, wrapping within its case;
// non-letters are returned unchanged
char rotate(char c, int k)
{
    if (isupper(c))
    {
        return 'A' + (c - 'A' + k) % 26;
    }
    else if (islower(c))
    {
        return 'a' + (c - 'a' + k) % 26;
    }
    else
    {
        return c;
    }
}
