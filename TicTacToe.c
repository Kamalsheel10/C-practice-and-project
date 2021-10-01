#include <stdio.h>
char sqar[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int player, choice;
void display()
{
    printf("\n\n\t\tTic-tac-toe\n\n\n");
    printf("\t\t\t\tPlayer 1 and Player 2\n\n\n");
    printf("  |  |\n");
    printf("%c |%c |%c\n", sqar[1], sqar[2], sqar[3]);
    printf("__|__|__\n");
    printf("  |  |\n");
    printf("%c |%c |%c\n", sqar[4], sqar[5], sqar[6]);
    printf("__|__|__\n");
    printf("  |  |\n");
    printf("%c |%c |%c\n", sqar[7], sqar[8], sqar[9]);
    printf("__|__|__\n");
    printf("  |  |\n\n\n");
}
int chkforwin()
{
    if (sqar[1] == sqar[2] && sqar[2] == sqar[3])
    {
        return 1;
    }
    else if (sqar[4] == sqar[5] && sqar[5] == sqar[6])
    {
        return 1;
    }
    else if (sqar[7] == sqar[8] && sqar[8] == sqar[9])
    {
        return 1;
    }
    else if (sqar[1] == sqar[4] && sqar[4] == sqar[7])
    {
        return 1;
    }
    else if (sqar[2] == sqar[5] && sqar[5] == sqar[8])
    {
        return 1;
    }
    else if (sqar[3] == sqar[6] && sqar[6] == sqar[9])
    {
        return 1;
    }
    else if (sqar[1] == sqar[5] && sqar[5] == sqar[9])
    {
        return 1;
    }
    else if (sqar[3] == sqar[5] && sqar[5] == sqar[7])
    {
        return 1;
    }
    else if (sqar[1]!='1'&&sqar[2]!='2'&&sqar[3]!='3'&&sqar[4]!='4'&&sqar[5]!='5'&&sqar[6]!='6'&&sqar[7]!='7'&&sqar[8]!='8'&&sqar[9]!='9')
    {
        return 0;
    }
    
    else
    {
        return -1;
    }
}
void click(char mark)
{

    if (sqar[1] == '1' && choice == 1)
    {
        sqar[1] = mark;
    }
    else if (sqar[2] == '2' && choice == 2)
    {
        sqar[2] = mark;
    }
    else if (sqar[3] == '3' && choice == 3)
    {
        sqar[3] = mark;
    }
    else if (sqar[4] == '4' && choice == 4)
    {
        sqar[4] = mark;
    }
    else if (sqar[5] == '5' && choice == 5)
    {
        sqar[5] = mark;
    }
    else if (sqar[6] == '6' && choice == 6)
    {
        sqar[6] = mark;
    }
    else if (sqar[7] == '7' && choice == 7)
    {
        sqar[7] = mark;
    }
    else if (sqar[8] == '8' && choice == 8)
    {
        sqar[8] = mark;
    }
    else if (sqar[9] == '9' && choice == 9)
    {
        sqar[9] = mark;
    }
    else
    {
        printf("Invalid move you donkey");
    }
    
}
int main()
{
    int status;
    char mark;
    player = 1;
    do
    {
        display();
        if (player % 2 == 1)
        {
            printf("Player %d's turn\n", player);
        }
        else if (player % 2 == 0)
        {
            printf("Player 2's turn\n");
            player = 0;
        }
        printf("Enter the number\n");
        scanf("%d", &choice);
        if (player == 1)
        {
            mark = 'X';
        }
        else
        {
            mark = 'O';
        }
        click(mark);
        status = chkforwin();
        player++;
        
        
    } while (status == -1);

    if (status==1 && player ==1 )
    {
        printf("Player %d has won the game\n",--player);
    }
     else if (status==1 && player ==2 )
    {
        player==2;
        printf("Player %d has won the game\n",--player);
    }
    else{
        printf("Game has been drawned\n");
    }

    

    return 0;
}