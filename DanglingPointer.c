#include <stdio.h>
#include <stdlib.h>
int abb{
    int sum,a,b;
    sum=a+b;
    return &sum;
}
int main()
{
    // Case1: De allocation of memory
    int *ptt;
    ptt=(int *) malloc(7* sizeof(int));
    ptt[0]=23;
    ptt[1]=45;
    free(ptt);

    // Case 2: Returning local variables in function call
    int *poo=abb;
return 0;
}