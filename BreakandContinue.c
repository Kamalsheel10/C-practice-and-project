#include <stdio.h>

int main()
{
    /* BREAK STATEMENT
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);
        if (age > 10)
        {
            break; //This code continues to go in loop if the age is less than 10. If the age is more than 10 than the code goes out of loop.
        }
    }
    return 0;*/

    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);

        if (age < 12)
        {
            continue;//If age is more than 12 then this code prints the downwards printf.If age is not greater than 12 then it doesn't and goes back to loop. 
        }
        printf("This is continuation");
    }
    return 0;
}