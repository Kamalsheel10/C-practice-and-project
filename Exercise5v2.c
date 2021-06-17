#include <stdio.h>
void rv(int poo[])
{
    int tmp;
    for (int j = 0; j < 7 / 2; j++)
    {
        tmp = poo[j];
        poo[j] = poo[6 - j];
        poo[6 - j] = tmp;
    }
}
void fun(int pii[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The array of element %d is %d\n", i, pii[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Before swap\n");
    fun(arr);
    rv(arr);
    printf("After swap\n");
    fun(arr);

    return 0;
}