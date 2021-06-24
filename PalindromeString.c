#include <stdio.h>
#include <string.h>
int ispalindrome(char str1[])
{
    int a = 0;
    printf("%d\n", strlen(str1));
    for (int i = 0; i < strlen(str1) / 2; i++)
    {
        if (str1[i] == str1[strlen(str1) - 1 - i])
        {
            a++;

            continue;
        }
        else
        {
            break;
        }
    }
    if (a == strlen(str1) / 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str[50];
    printf("Enter the string \n");
    scanf("%s", &str);
    getchar();
    if (ispalindrome(str))
    {
        printf("this string is palindrome\n");
    }
    else
    {
        printf("string is not palindrome");
    }
    return 0;
}