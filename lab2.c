#include <stdio.h>
#include <math.h>
int main(){
    // to print quadritic equation
    float b,a,c,x,y,z,xx,aa;
    printf("Enter the values for b,a,c\n");
    scanf("%f",&b);
    scanf("%f",&a);
    scanf("%f",&c);
    printf("The values of\nb:%0.1f\na:%0.1f\nc:%0.1f\n",b,a,c);
    z=b*b-(4*a*c);
    if(z>0){
    printf("%0.1f\n",z);
    y=sqrt(z);
    printf("%0.1f\n",y);
    x=-(b)+y;
    printf("%0.1f\n",x);
    aa=2*a;
    xx=x/aa;
    printf("The quadritic value is %0.1f\n",xx);
    }
    else{
        printf("Z cannot be calculated\n");
    }
    return 0;
}