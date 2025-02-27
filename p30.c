// 30.	Write a program that calculates the average marks of all the subjects.
//   The number of subjects ‘n’ is accepted from the user.  Allocate memory dynamically for ‘n’ integers.
//   Free the memory when not in use.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of subject\n");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int));
    printf("Enter the marks of students\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += ptr[i];
    int avg = sum / n;
    printf("Average is %d", avg);
    free(ptr);
    ptr = NULL;

    return 0;
}