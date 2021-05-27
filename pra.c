#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter the marks of physics\n");
    scanf("%d", &a);//takes the input from keyboard
    printf("You have scored %d in physics\n", a);
    if(a>=40){//condition if a is greater than 40
        printf("Congrats! You have won Rs.15\n");
    }
    else{//if the condition is not met 
        printf("You have failed!\n");
    }
     printf("Enter the marks of science \n");
    scanf("%d", &b);
    printf("You have scored %d in science\n", a);
    if(b>=40){
        printf("Congrats! You have won Rs.15\n");
    }
    else{
        printf("You have failed!\n");
    }
    if(a&&b>40){//if the condition of both a and b are true (Logiocal and gate)
        printf("You have Rs.45\n");
    }


    return 0;
    
}
