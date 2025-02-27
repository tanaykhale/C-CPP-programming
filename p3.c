#include <stdio.h>
void charLine(char a, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%c", a);
    }
}
int main()
{

    charLine('-', 50);
    return 0;
}