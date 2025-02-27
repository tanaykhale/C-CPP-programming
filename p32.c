// 32.	Define a structure “Book” having members – bookId, title, price.  Use typedef to name this structure “BOOK”.
//   Accept the data for a book and display the record.
#include <stdio.h>
typedef struct Book
{
    int bookId;
    char title[100];
    float price;
};
int main()
{
    struct Book b1;
    printf("Enter the bookid,title,price\n");
    scanf("%d%s%f", &b1.bookId, b1.title, b1.price);
    printf("Details\n%d\n%s\n%f\n", b1.bookId, b1.title, b1.price);

    return 0;
}
