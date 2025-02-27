// 31.	Write a program to sort five user entered strings into alphabetical order.
//  Use dynamic memory allocation to store strings.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *strings[5];
    char temp[100];
    printf("Enter the five strings\n");
    for (int i = 0; i < 5; i++)
    {
        printf("String %d: ", i + 1);
        scanf("%s", temp);
        strings[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(strings[i], temp);
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     char temp[100];
    //     strings[i] = temp;
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%s ", temp[j]);
    //     }
    // }
}