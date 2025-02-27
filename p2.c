// 19.	Write a function ‘Fibonacci()’ to generate the terms of the fibonacci series. The number of terms should be entered by the user in main().  The series should be printed in the function. The terms of the Fibonacci series are 0 1 1 2 3 5 8 13 21 . . .
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c;
    for (int i = 0; i < 10; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d", c);
    }
}