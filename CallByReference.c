#include <stdio.h>
void swap(int *x, int *y)
{
    int tmp;
    tmp = *x; //tmp = 23
    *x = *y;  //x = 45
    *y = tmp; //y = 23
}
void quiz(int *v, int *h)
{
    int tr, mr, kr;
    tr = *v + *h; //tr = 5 + 2 = 7
    *v = tr;      //v = tr = 7
    mr = *v - *h; //mr = 7 - 2 = 5
    *h = mr;      //*h = mr = 5
}
int main()
{
    int a = 23, b = 45;
    printf("You have entered %d and %d\n", a, b);
    swap(&a, &b);
    printf("After swap %d and %d\n", a, b);
    int c = 5, d = 2;
    quiz(&c, &d);
    printf("The value of a and b is %d and %d\n", c, d);
    return 0;
}
