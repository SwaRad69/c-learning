// #include <iostream>

// int main()
// {
//     srand(time(NULL));
//     int num = rand()%100 + 1;
//     int guess , tries;

//     do
//     {
//         std::cout << "Enter a number between 1 and 100";
//         std::cin  >> guess;
//         if (guess>num)
//         {
//         std::cout << "higher karo";
            
//         }
//         else if (guess<num)
//         std::cout << "higher karo";
//         {
            
//         }
        
        


        
//     } while ();
    
//     return 0;
// }
#include <iostream>
#include <cstdlib>  // for srand() and rand()
#include <ctime>    // for time()

int main()
{
    srand(time(NULL));  // Seed the random number generator
    int num = rand() % 100 + 1;  // Generate random number between 1 and 100
    int guess, tries = 0;  // Initialize guess and tries

    do
    {
        std::cout << "Enter a number between 1 and 100: ";
        std::cin >> guess;
        tries++;  // Increment the number of tries

        if (guess > num)
        {
            std::cout << "Lower karo\n";
        }
        else if (guess < num)
        {
            std::cout << "Higher karo\n";
        }
    } while (guess != num);  // Loop until the correct guess
//REMEMABER THE SYNTAX FOR DO WHLE
    std::cout << "You guessed the correct number in " << tries << " tries!\n";
    
    return 0;
}
