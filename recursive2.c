/*#include <stdio.h>
int fun(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 7 + fun(n - 2);
    }
}

int main()
{
    printf("%d\n", fun(4));

    return 0;
}*/

// WAP to print numbers from 1 to 10 in such a way that when number is odd add 1 and when number is even subtract 1.
//Program to understand indirect recursion
/*
#include <stdio.h>
void odd();
void even();
int i = 1;
void odd()
{
    if (i <= 10)
    {
        printf("%d\n", i + 1);
        i++;
        even();
        return;
    }
}
void even()
{
    if (i <= 10)
    {
        printf("%d\n", i - 1);
        i++;
        odd();
        return;
    }
}

int main()
{
    odd();
} */

// Tail recursive program. it prints 321
/*
#include <stdio.h>
void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("%d", n);
        return fun(n - 1);
    }
}
int main()
{
    fun(3);
    return 0;
} */

// Non-tail recursive function
/*
#include <stdio.h>
void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        fun(n - 1);
        printf("%d\t", n);
    }
}
int main()
{
    fun(3);
    return 0;
} */

//Another example of non-tail function

#include <stdio.h>
int fun(int n){
if (n==1){
    return 0;
}
else{
    return 1 + fun(n/2);
}
}
int main(){
    printf("%d\n",fun(8));
    return 0;
}