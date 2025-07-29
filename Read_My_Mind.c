/*The Game is all about geussing a Random number which is geussed by the opponent*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));                         // seeding the random no. generater(To do not repeat the pattern)
    int random_number = (rand() % 100) + 1; // Random no.generator from 1 to 100
    int no_of_geusses = 0;
    int geussed_no;
    char choice;

    do
    {
        do
        {
            printf("\nEnter a number between 1 and 100: ");
            scanf("%d", &geussed_no);
            no_of_geusses++;
            
            if (geussed_no > random_number)
            {
                printf("Too high! Try again.\n");
            }
            else if (geussed_no < random_number)
            {
                printf("Too low! Try again.\n");
            }
            else
            {
                printf("\nCongratulations! You guessed the number in %d attempts.\n", no_of_geusses);
            }
        } while (geussed_no != random_number);

        printf("\nDo You want To Proceed And Play!!!!\nPLease Enter Y/N: ");
        scanf("%c",choice);
    } while (choice == 'Y' || choice == 'y' || choice == '1');

        return 0;
}