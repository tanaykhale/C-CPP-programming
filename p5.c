// 23.	Write a program which accepts two integers in main(). Pass these as arguments to function max().
//  In max(), find the maximum of these two numbers and using a return statement, return the address of the \
//  maximum number and print it in main().
#include <stdio.h>
int *max(int a, int b)
{
    int *pa = &a;
    int *pb = &b;
    if (a > b)
        return pa;
    else
        return pb;
}
int main()
{

    int a, b;
    printf("Enter the two numbers \n");
    scanf("%d,%d", &a, &b);
    int *res = max(a, b);
    printf("Maximum number is %d", res);
    return 0;
}