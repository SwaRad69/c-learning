// 
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    char playAgain = 'y';

    srand(time(NULL)); // Seed the random number generator once

    while (playAgain == 'y') 
    {
        std::cout << "Enter a number between 0, 1 and 2 \nwhere \n0--> represents rock \n1--> represents paper \n2--> represents scissors\n";
        std::cin >> player;

        if (player < 0 || player > 2)
        {
            std::cout << "Invalid input. Please try again.\n";
            continue;
        }

        computer = rand() % 3; // Generate computer's choice

        if (computer == 0)
        {
            std::cout << "Computer chose rock \n";
        }
        else if (computer == 1)
        {
            std::cout << "Computer chose paper \n";
        }
        else
        {
            std::cout << "Computer chose scissors \n";
        }

        if (player == 0)
        {
            std::cout << "You chose rock \n";
        }
        else if (player == 1)
        {
            std::cout << "You chose paper \n";
        }
        else
        {
            std::cout << "You chose scissors \n";
        }

        // Determine the winner
        if ((computer == 0 && player == 1) || (computer == 1 && player == 2) || (computer == 2 && player == 0))
        {
            std::cout << "Player wins \n";
        }
        else if ((computer == 0 && player == 2) || (computer == 1 && player == 0) || (computer == 2 && player == 1))
        {
            std::cout << "Computer wins \n";
        }
        else
        {
            std::cout << "It's a tie \n";
        }

        std::cout << "Do you want to play again? (y/n)\n";
        std::cin >> playAgain;
    }

    return 0;
}