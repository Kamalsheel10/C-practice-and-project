#include <stdio.h>
void starpattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void starreversedpattern(int o)
{
    for (int p = 0; p < o; p++)
    {
        for (int v = 0; v <= o - p - 1; v++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int k;
    int h;
    printf("Enter how many rows you want\n");
    scanf("%d", &k);
    printf("Do you want starpattern or starreversedpattern?");
    printf("\nPress 1 or 2\n");
    scanf("%d", &h);
    if (h == 1)
    {
        starpattern(k);
    }
    else
    {
        starreversedpattern(k);
    }

    return 0;
}