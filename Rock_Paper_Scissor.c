/*IT IS A PURE NOSTOLGIA!!!! Childhood refreshing moment*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player;
    char i;
    
    srand(time(0));
    
    /*Right before this, you're using scanf("%d", &player); in the previous loop iteration.
    ✅ When you enter a number (like 1), you also press Enter, which adds a newline character ('\n') to the input buffer.
    ❌ The next scanf("%c", &i) immediately reads that leftover newline instead of waiting for actual user input.*/
    
    while (1)
    {   
        int computer = (rand() % 3) + 1;
        printf("\nDo you want to continue to the game Y/N?\n");           //Use a space before %c in scanf to ignore whitespace
        scanf(" %c",&i);                                     

        if (i == 'Y' || i == 'y')
        {
            printf("Enter 1 for rock, 2 for paper, 3 for scissor:\n");
            scanf("%d", &player);
            if (player == 1 && computer == 1)
            {
                printf("Match draw!\nYou both choose rock\n");
            }
            else if (player == 1 && computer == 2)
            {
                printf("You Lose!!\nYou choose rock\nOpponent choose paper\n");
            }
            else if (player == 1 && computer == 3)
            {
                printf("You win!!\nYou choose rock\nOpponent choose scissor\n");
            }
            else if (player == 2 && computer == 1)
            {
                printf("You win!!\nYou choose paper\nOpponent choose rock\n");
            }
            else if (player == 2 && computer == 2)
            {
                printf("Match draw!\nYou both choose paper\n");
            }
            else if (player == 2 && computer == 3)
            {
                printf("You lose!!\nYou choose paper\nOpponent choose scissor\n");
            }
            else if (player == 3 && computer == 1)
            {
                printf("You lose!!\nYou choose scissor\nOpponent choose rock\n");
            }
            else if (player == 3 && computer == 2)
            {
                printf("You win!!\nYou choose scissor\nOpponent choose paper\n");
            }
            else if(player == 3 && computer == 3)
            {
                printf("Match draw!\nYou both choose scissor\n");
            }
            else
            {
                printf("\nSomething went wrong!!!!");
            }
        }
        
        else
        {
            printf("\nWe are grateful!,You played this game.\nThank you");
            break;
        }
    }
    return 0;
}