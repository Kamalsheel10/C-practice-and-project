#include <stdio.h>

int main()
{
    int n = 4;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j - i > k; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    int a=5;
    for (int i = 1; i < a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }for (int i = 1; i < a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("%d",i);
        printf("\n");
    }
    
 int b=5;
 int c=5;
 for (int i = 1; i <= b; i++)
 {
     for (int j = 1; j < c; j++)
     {
         printf(" ");
     }
     c--;

     for (int o = 1; o <= i; o++)
     {
         printf("%d ",i);
     }
     
     printf("\n");
 }
 
    return 0;
}