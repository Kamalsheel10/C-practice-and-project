#include <stdio.h>

int main()
{
    int age, i, j;
    for (i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (j = 0; j < 8; j++)
        {
            printf("Enter your age 0 if you want to end the program\n");
            scanf("%d", &age);
            if (age == 0)
            {
                goto end; // This code stops executing if the user types 0 because if typed so then nested loop will be over.
            }
        }
    }
end:
    return 0;
}