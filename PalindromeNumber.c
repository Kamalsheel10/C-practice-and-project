#include <stdio.h>
int Palindrome(int j)
{
    int f = j; // This stores the value of j in f.
    int k = 0; // let's say j = 19. J = 1 (NEW VALUE).
    while (j != 0)
    {
        k = k * 10 + j % 10; // 0 * 10 + 19 % 10 = 9. So k becomes 9.
                             // 9 * 10 +  1 % 10 = 90 + 1 = 91
                             // SO the number is reversed to 91.
        j = j / 10;          // 19 / 10 = 1. So J becomes 1.
    }
    printf("Reversed number is %d\n", k); // This prints the reversed value.

    if (f == k)
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
    int k;
    printf("Enter any numbers\n");
    scanf("%d", &k);
    printf("You have entered %d\n", k);
    if (Palindrome(k))
    {
        printf("The number is Palindrome\n");
    }
    else
    {
        printf("The number is not Palindrome\n");
    }
    return 0;
}