#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter four numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    (a > b && a > c && a > d) ? printf("A is the largest\n") : (b > c && b > d) ? printf("B is the largest\n")
                                                           : (c > d)            ? printf("C is the largest\n")
                                                                                : printf("D is the largest\n");
    return 0;
}