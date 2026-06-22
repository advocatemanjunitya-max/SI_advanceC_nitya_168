#include <stdio.h>

int main()
{
    int player1, player2;

    printf("Rock Paper Scissors Game\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Enter Player 1 choice: ");
    scanf("%d", &player1);

    printf("Enter Player 2 choice: ");
    scanf("%d", &player2);

    if (player1 == player2)
    {
        printf("Match Draw\n");
    }
    else if ((player1 == 1 && player2 == 3) ||
             (player1 == 2 && player2 == 1) ||
             (player1 == 3 && player2 == 2))
    {
        printf("Player 1 Wins\n");
    }
    else
    {
        printf("Player 2 Wins\n");
    }

    return 0;
}