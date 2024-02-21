#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    /*getting the user choice*/
    char your_choice;
    char computer_choice;
    printf("\n\n\t\t\t\tEnter r for ROCK - p for PAPER - s for SCISSOR\n");
    scanf("\t\t\t\t%c", &your_choice);
    if(your_choice != 'r' && your_choice != 'p' && your_choice != 's' )
    {
        printf("\t\t\t\twrong enterance!\n");
    }
    else
    {
        /*********************************/
        /*generating random computer choice*/
        /*generating random numbers*/
        srand(time(NULL));
        int n = rand() % 100;
        if (n <= 33)
        {
            computer_choice = 'r';  //ROCK
        }
        else if (n > 33 && n <= 66)
        {
            computer_choice = 'p';  //PAPER
        }
        else
        {
            char computer_choice = 's';

        }
        /******checking the winner*******/
        if(computer_choice == your_choice)
        {
            printf("\t\t\t\tGame Draw!\n");
        }
        else if(computer_choice == 'r' && your_choice == 'p')
        {
            printf("\t\t\t\tyou have won the game!\n");
        }
        else if(computer_choice == 'p' && your_choice == 's')
        {
            printf("\t\t\t\tyou have won the game!\n");
        }
        else if(computer_choice == 's' && your_choice == 'r')
        {
            printf("\t\t\t\tyou have won lost the game!\n");
        }
        else
        {
            printf("\t\t\t\tyou have lost the game!\n");
        }
        printf("\t\t\t\tYour choice is : %c and Computer's choice is : %c\n",your_choice, computer_choice);
    }
    return 0;
}
