/*  WITH ARGUMENTS AND WITH RETURN VALUE
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 3, int b = 5;
    int c =sum(a, b);
    printf("%d\n", c);
    return 0;
} */

/*#include <stdio.h>
int sum(int a, int b); // Function prototype

int main()
{
    int a, b, c;
    a = 3;
    b = 5;
    c = sum(a, b);
    printf("%d\n", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}*/

/*  WITH ARGUMENTS AND WITHOUT RETURN VALUE
#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%c", '*');
    }
}

int main()
{
    printstar(12);
    return 0;
} */

/*  WITHOUT ARGUMENTS AND WITH RETURN VALUE
#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter the number\n");
    scanf("%d", &i);
    return i;
}

int main()
{
    int c;
    c = takenumber();
    printf("The entered number is: %d\n", c);
    return 0;
} */

/*  WITHOUT ARGUMENTS AND WITHOUT RETURN VALUE
#include <stdio.h>
int takenumber(void)
{

    int a;
    int b;
}

int main()
{
    int a, b, c;
    a = 1;
    b = 2;
    c = a + b;
    printf("The sum is %d\n", c);
    return 0;
} */