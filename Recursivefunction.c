#include <stdio.h>
int facto(int y){
   if(y==1 || y==0){
        return 1;
    }
    else{
        return (y*facto(y-1));
    }
   /* for function only
   int f=1;
    for(int i=1; i<=y; i++){
        f=i*f;
    }
    return f;*/
}

int main(){
    int k;
    printf("Enter the number\n");
    scanf("%d",&k);
    int c=facto(k);
    printf("The factorial is %d\n",c);

    return 0;
}