#include <iostream>
#include <cstdlib> 
#include <ctime>  
int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    
    int randomNumber = (rand() % 100) + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!\n";
    std::cout << "I have generated a random number between 1 and 100. Try to guess it!\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << attempts << " attempts!\n";
        }
    } while (guess != randomNumber);

    return 0;
}