#include <stdio.h>

int main()
{
    int a = 80;
    int *ptr = &a;
    int arr[5]={4,67,69,12,50};
    int *p=arr;
    printf("The value of a is %d\n", a);       // this prints the value of a
    printf("The memory of a is %d\n", &a);     // this prints the memory location of a
    printf("The memory of *ptr is %p\n", ptr); // this prints the memory location of pointer ptr
    printf("The value of ptr  is %d\n", *ptr); // this prints the value of ptr which is value of a
    printf("%d\n", &ptr - 1);                  // this shows the address of int and size of int in my laptop
    printf("%d\n", &ptr);
    printf("%d\n", &ptr + 1);
    printf("%d\n", arr[1]);
    printf("%d\n", &arr[0]);
    printf("%d\n", &p + 1);
    return 0;
}