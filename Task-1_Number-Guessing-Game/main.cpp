#include <iostream>
#include <ctime>

int main()
{
    std::cout << "Please Enter Your Guess Limit: ";
    int limitt; 
    std::cin >> limitt;
    srand( time(0) ^ clock() );
    const int num = rand() % limitt;
    while (true) {
        std::cout << "Enter the guess Number: ";
        int guess; 
        std::cin >> guess;
        if (guess < num) {
            std::cout << "Your guess is too small, please retry\n";
            continue;
        }
         else if (guess > num) {
            std::cout << "Your guess is too large, please retry\n";
            continue;
        } 
        else {
            std::cout << "You have guessed correctly!\n";
            break;
        }
    }
    return 0;
}
