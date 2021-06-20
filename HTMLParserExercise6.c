#include <stdio.h>
#include <string.h>
void fun(char *str)
{
    int k = 0; //Variable to track whether we are inside the tag
    int ind = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            k = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            k = 0;
            continue;
        }
        if (k == 0)
        {
            str[ind] = str[i];
            ind++;
        }
    }
    str[ind] = '\0';
    //Remove the trailing spaces from the beginning
    while (str[0] == ' ')
    {
        //Shift the string to the left
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }
    //Remove the trailing spaces from the end
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}
int main()
{
    char nam[] = "<h1> this is us. </h1>";
    printf("%s\n", nam);
    fun(nam);
    printf("~~~~%s~~~~\n", nam);

    return 0;
}