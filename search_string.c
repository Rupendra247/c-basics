#include <stdio.h>
#include<string.h>

int main(void)
{
    char *words[] = {"eam" , "ram", "sita", "hope"};
    char n[20];

    printf("Enter a word: ");
    scanf("%s", n);

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(words[i],n)==0)
        {
            printf("found\n");
            // printf("enter number is %d\n", n);
            // printf("number found in %d index \n", i);
            return 0;
        }
    }
    printf("not found\n");
    return 0;
}