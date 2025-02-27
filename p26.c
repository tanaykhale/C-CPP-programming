
// 26.	Write a program to insert an element into an array. Accept position of element to be inserted from user.
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
    printf("Enter the position of element that you want to add\n");
    scanf("%d", &pos);
    int new_element;
    printf("Enter the new element you want to add \n");
    scanf("%d", &new_element);
    printf("Array before addition\n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Array after adding the element\n  ");

    for (int i = size; i > pos; i--)
    {

        arr[i] = arr[i - 1];
    }
    arr[pos] = new_element;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}