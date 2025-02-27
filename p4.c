// 20.	Find the sine value of an angle by calculating the following series up to first 5 items
// sin(x) = x – x^3/3! + x^5/5! – x^7/7! + x^9/9!
// Where x is in radians.
// Radian = 180/PI
// PI = 3.142
// Make use of following functions:
// int factorial(int); and int power(int, int);
#include <stdio.h>
int factorial(int num)
{
    if (num == 0 || num == 1)
        return num;
    return num * factorial(num - 1);
}
int power(int n, int p)
{
    int result = 1;
    for (int i = 0; i < p; i++)
        result *= p;
    return result;
}
int main()
{
    int x;
    printf("Enter the number in radian \n");
    scanf("%d", &x);
    int x_radian;
    x_radian = (x * 3.142) / 180;
    printf("Radian to degree %d", x_radian);
    int res = x_radian - (power(x_radian, 3) / factorial(3)) + (power(x_radian, 5) / factorial(5)) - (power(x_radian, 7) / factorial(7)) + (power(x_radian, 9) / factorial(9));
    printf("Result %d", res);
    return 0;
}
