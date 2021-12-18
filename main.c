// s and w = s
// s and g = g
// w and g = w

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//Function for game win
void gamewin(char user_input, int comp_choice)
{
    //Chose option for game computer choice
    if (comp_choice <= 25)
    {
        comp_choice = 's';
    }
    else if (comp_choice > 25 && comp_choice <= 50)
    {
        comp_choice = 'w';
    }
    else
    {
        comp_choice = 'g';
    }
    if ((user_input == 's' && comp_choice == 'w') || (user_input == 'g' && comp_choice == 's') || (user_input == 'w' && comp_choice == 'g'))
    {
        printf("user win\n");
    }
    else
    {
        printf("comp win\n");
    }
}

void main()
{
    // User input
    char user_input;
    printf("Enter Snake[s]/Water[w]/Gun[g]/'q' to exit:\n");
    scanf("%c", &user_input);
    int comp_choice = rand() % 100 + 1;
    gamewin(user_input, comp_choice);

    while (user_input != 'q')
    {
        printf("Enter Snake[s]/Water[w]/Gun[g]/'q' to exit:\n");
        scanf("%c", &user_input);
        //Computer choice
        comp_choice = rand() % 100 + 1;
        gamewin(user_input, comp_choice);
    }
}