// 15.	Write a program to generate all possible combinations of 1, 2, 3 using for loop.
#include <stdio.h>
#include <string.h>
int main()
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            printf("(%d,%d)", i, j);
        }
    }
    printf("\n");

    return 0;
}