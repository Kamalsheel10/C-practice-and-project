#include <stdio.h>

int main()
{   
    int j;
    printf("Enter the multipliaction table that you wanna know\n");
    scanf("%d", &j);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",j,i,j*i);
    }
    return 0;
}