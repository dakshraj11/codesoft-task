#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//*****************************number guessing game*********************

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    
    int randomNumber = std::rand() % 100 + 1;

    int Guess;
    int attempts = 0;

    std::cout << "-----Welcome to the Number Guessing Game--------" << std::endl;

    while (true) {
        std::cout << "Enter your guess (between 1 and 100)= ";
        std::cin >> Guess;
        attempts++;
 
        if (Guess < 1 || Guess > 100) {
            std::cout << "Please enter a valid guess between 1 and 100." << std::endl;
        } else if (Guess < randomNumber) {
            std::cout << "Too low Try again." << std::endl;
        } else if (Guess > randomNumber) {         
            std::cout << "Too high Try again." << std::endl;
        } else {
         std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.";
            break;
        }
    }

    return 0;
}
