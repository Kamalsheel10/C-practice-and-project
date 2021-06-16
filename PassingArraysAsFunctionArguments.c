#include <stdio.h>
void func1(int par[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("The value of %d at array % is\n", i, par[i]);
    }
    *(par + 1) = 998;//if i change the value of array here then it will change in main function as well
}
void func2(int pr[2][2])
{
    for (int k = 0; k < 2; k++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the array at %d is %d\n", k, j, pr[k][j]);
        }
    }
}

int main()
{
    int arr[] = {23, 43, 44};
    int py[][2] = {{2, 3}, {5, 6}};
    func1(arr);
    func1(arr);
    func2(py);

    return 0;
}