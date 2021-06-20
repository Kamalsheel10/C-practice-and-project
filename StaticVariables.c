#include <stdio.h>
int b = 20; //This is a global variable
int fun1(int b)
{
    b = 123;
    printf("The value of b is %d\n", b);
    printf("%d\n", &b);
    return b;
}
void fi(int *po)
{
    printf("%d\n", *po); //This prints value of f
    printf("%d\n", &po); //This prints address of f
}
void fu(int j)
{
    static int b = 8;//This is the use of static variable.
    printf("The value of b is %d\n", b);
    b++;
}
int main()
{
    int b = 50;
    int h;
    int c;
    int f = 23;
    printf("The value of b is %d\n", b);
    printf("%d\n", &b);
    int d = fun1(c);
    printf("%d\n", d);
    // fi(f);
    fi(&f);
    printf("%d\n", &f);
    fu(h);
    fu(h);
    fu(h);
    fu(h);
    fu(h);
    return 0;
}