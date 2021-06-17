#include <stdio.h>
#include <string.h>

int main()
{   
    printf("Enter a name\n");
    char s0[50];
    gets(s0);
    char s1[50]=" is a best friend of\t";
    printf("Enter another name\n");
    char s2[50];
    gets(s2);
    puts(strcat(s0,strcat(s1,s2)));
    
    // char nam2="sam";
    // printf("Enter any thing\n");
    // char ss[] = {'a', 'p', 'p', '\0'};
    // char kam[50];
    // gets(kam);
    // puts(kam);
    // This is string.Array version of character return 0;
return 0;
}