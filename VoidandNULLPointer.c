#include <stdio.h>
int main()
{
   int a=555;
   float b=56.76;
   void *ptr;
   int *opp;
   ptr=&a;
   printf("The value of a is %d\n",*((int *)ptr));
   //(int *) it is used to typecast void pointer to int
   ptr=&b;
   printf("The value of b is %.2f\n",*((float *)ptr));
   opp=NULL;
   printf("The value opp is %d\n",opp);
return 0;
}