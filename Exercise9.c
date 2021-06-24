#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Enter the name of player1\n");
    char player1[45];
    scanf("%s", player1);
    printf("The name of player1 is %s\n", player1);
    printf("\nEnter the name of player1\n");
    char player2[45];
    scanf("%s", player2);
    printf("The name of player2 is %s\n", player2);
    int ak;

    char a[10] = "Paper";
    char b[10] = "Rock";
    char c[10] = "Sessior";
    char d[10] = "Rock";
    char f[10] = "Paper";
    char g[10] = "Sessior";
    // srand(time(NULL));
    // printf("random lttr is %d\n",rand()%3);
    for (int i = 0; i < 3; i++)
    {
        printf("%s's turn\n", player1);
        printf("Enter a number from 0-2\n");
        scanf("%d", &ak);
        if (ak == 0)
        {
            printf("%s\n", a);
        }
        else if (ak == 1)
        {
            printf("%s\n", b);
        }
        if (ak == 2)
        {
            printf("%s\n", c);
        }
        printf("%s's turn\n", player2);
        int pk(int n)
        {
            srand(time(NULL));
            return rand() % n;
        }
        printf("random number from 0-2 is %d\n", pk(2));
        switch (pk(2))
        {
        case 0:
            printf("%s\n",d);
            break;
            case 1:
            printf("%s\n",f);
            break;
            case 2:
            printf("%s\n",g);
            break;
            
            }
        if(ak==0 && pk(2)==0){
               printf("\n\n%s win\n",player1); 
        }
            if(ak==0 && pk(2)==1){
                printf("\n\nDraw\n");
        } 
           if(ak==0 && pk(2)==2){
              printf("\n\n%s win\n",player2);   
        }  
        if(ak==1 && pk(2)==0){
               printf("\n\nDraw\n"); 
        }
            if(ak==1 && pk(2)==1){
                printf("\n\n%s win\n",player2);
            }
            if(ak==1 && pk(2)==2){
                printf("\n\n%s win\n",player2);
            }
        if(ak==2 && pk(2)==0){
            printf("\n\n%s win\n",player2); 
               
        }
        if(ak==2 && pk(2)==1){
            printf("\n\n%s win\n",player1); 
               
        }
        if(ak==2 && pk(2)==2){
            printf("\n\nDraw\n"); 
               
        }
 }
 
 
  return 0;
}