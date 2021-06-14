#include <stdio.h>
int try(int k){
    if(k==1 || k==0){
        return k;
    }
    else{
        return(try(k-1)+try(k-2));
    }
}

int main()
{
    
    int ty;
    printf("Enter the number\n");
    scanf("%d",&ty);
    printf("%d\n",try(ty));
    return 0;
}
