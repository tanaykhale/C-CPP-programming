#include <stdio.h>
#include <string.h>
int occurences(char str[], char ch)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch)
            count++;
    }
    return count;
}
int countBlankSpaces(char str[])
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);
    // char ch;
    // printf("Enter the character you want to find count\n");
    // scanf("%c", &ch);
    // printf("%c occured %d times\n", ch, occurences(str, ch));
    printf("Number of blank spaces %d\n", countBlankSpaces(str));
    printf("Number of word %d\n", countBlankSpaces(str) + 1);
    printf("Number of vowels %d\n", countVowels(str));
    return 0;
}