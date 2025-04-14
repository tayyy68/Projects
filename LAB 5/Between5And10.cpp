#include <iostream>
#include <limits> // For input validation

int main() {
    int userInput;
    bool validInput = false;

    std::cout << "Enter an integer value between 5 and 10" << std::endl;

    while (!validInput) {
        // Check if input is an integer
        if (!(std::cin >> userInput)) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
            std::cout << "Sorry, you entered an invalid number, please try again" << std::endl;
            continue;
        }

        // Check if input is within range
        if (userInput < 5 || userInput > 10) {
            std::cout << "You entered " << userInput 
                      << ". Please enter a number between 5 and 10." << std::endl;
        } else {
            validInput = true;
        }
    }

    std::cout << "Your input value(" << userInput << ") has been accepted." << std::endl;

    return 0;
}