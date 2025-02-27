// 27.	Write a program to accept and display 3 by 3 matrix. Write Accept() and Display() functions to perform the tasks.
// a.	Find the transpose of a matrix and print the transpose using display() function.
// b.	Accept another matrix of same dimensions.  Find the addition of two matrices and print the resultant matrix.
// 28.	Write a program which will calculate multiplication of two 3 by 3 matrices.
#include <stdio.h>
void Accept(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void display(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][3];
    printf("Enter the elements of array\n");
    Accept(arr);
    printf("Array\n");
    display(arr);

    printf("Transpose of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    display(arr);
    printf("Enter another array for addition and multipication \n");
    int a[3][3];
    Accept(a);
    printf("Matrix addition\n");
    int add[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add[i][j] = arr[i][j] + a[i][j];
        }
    }
    display(add);
    printf("Matrix multiplication\n");
    int multi[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multi[i][j] = arr[i][j] * a[j][i];
        }
    }
    display(multi);
}