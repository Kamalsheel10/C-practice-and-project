#include <stdio.h>
int main()
{
    int num, fd, sd, td, sum;
    printf("Enter the three digits number\n");
    scanf("%d", &num);
    fd = num / 100;
    sd = num / 10 % 10;
    td = num % 10;
    sum = fd + sd + td;
    printf("The sum is:%d\n", sum);
    return 0;
}