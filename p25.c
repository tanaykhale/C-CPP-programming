
// 25.	Write a program to delete an element from a user entered array. Accept position of element to be deleted from user.
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array \n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Enter the position of element that you want to delete\n");
    scanf("%d", &pos);
    printf("Array before deletion\n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Array after deletion\n  ");
    for (int i = pos; i < size; i++)
    {
        arr[i - 1] = arr[i];
    }
    if (pos <= size)
        size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}