// Write a program in C to swap two numbers using function

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n1, n2;
    printf("\nEnter the n1\n");
    scanf("%d", &n1);
    printf("\nEnter the n2\n");
    scanf("%d", &n2);
    printf("\nYou have entered %d as n1 and %d as n2\n", n1, n2);
    printf("After reversing:\n");
    swap(&n1, &n2);
    printf("n1=%d\nn2=%d\n", n1, n2);

    return 0;
}

//Write a program in C to check a given number is even or odd using the function

#include <stdio.h>

int check(int z)
{
    if (z % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return z;
}
int main()
{
    int p, o;
    printf("\nEnter any integer\n");
    scanf("%d", &p);
    printf("You have entered %d\n", p);
    o = check(p);
    return 0;
}
//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function
 
 #include <stdio.h>
int facto(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n * facto(n - 1));
    }
}

int main()
{
    int sum = facto(5) / 5 + facto(4) / 4 + facto(3) / 3 + facto(2) / 2 + facto(1) / 1;
    printf("%d\n", sum);

    return 0;
}

//Write a program in C to check whether a number is a prime number or not using the function

#include <stdio.h>
int check(int num){
    if (num==2 || num==3|| num==5 || num==7){
        printf("It is a prime number\n");
    }
    else if(num%2==0||num%3==0||num%5==0||num%7==0){
        printf("it is not a prime number\n");
    }
    else{
        printf("it is a prime number\n");
    }
}

int main(){
    int k,l;
    printf("Enter any number\n");
    scanf("%d",&k);
    l=check(k);
    printf("%d",l);
    return 0;
}
