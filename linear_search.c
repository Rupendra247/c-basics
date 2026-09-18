#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 40, 50, 700, 79, 69, 90};
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("found\n");
            printf("enter number is %d\n", n);
            printf("number found in %d index \n", i);
            return 0;
        }
    }
    printf("not found\n");
    return 0;
}