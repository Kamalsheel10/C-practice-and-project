#include <stdio.h>
void fun(int prr[], int s)
{
    int j, sum, a, b, p;
    int avg;
    printf("Before swap\n");
    for (j = 0; j < s; j++)
    {
        printf("%d\t", prr[j]);
        //sum=sum+prr[j];
    }
    printf("\n");
    // printf("\nSum is %d\n",sum);
    // avg=sum/5;
    // printf("avg is=%d\n",avg);
    printf("After swap\n");
    sum = prr[0];
    prr[0] = prr[6];
    prr[6] = sum;
    a = prr[1];
    prr[1] = prr[5];
    prr[5] = a;
    b = prr[2];
    prr[2] = prr[4];
    prr[4] = b;
    // p = prr[3];
    // prr[3] = prr[6];
    // prr[6] = p;
    for (int n = 0; n < s; n++)
    {
        printf("%d\t", prr[n]);
    }
    printf("\n");
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // for(int i=0; i<5; i++){
    //     printf("Enter  array\n");
    //     scanf("%d",&arr[i]);
    //     printf("You have entered %d\n",arr[i]);
    // }
    fun(arr, 7);
    return 0;
}