#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int userInput;
    bool validInput;

    do {
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square \n2. Rectangle \n3. Triangle \n4. Quit program" << endl;
        cout << "\nEnter choice: ";

        validInput = false;
        
        while (!validInput) {
            if (!(cin >> userInput)) {
                cout << "Sorry, you entered an invalid number, please try again" << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                continue;
            }

            if (userInput >= 1 && userInput <= 4) {
                validInput = true;
            } else {
                cout << "Please enter a number between 1 and 4" << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        switch (userInput) {
            case 1: {
                double length;
                cout << "Enter the length of the Square: ";
                while (!(cin >> length) || length <= 0) {
                    cout << "Invalid input. Please enter a positive number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Area: " << length * length << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the Rectangle: ";
                while (!(cin >> length) || length <= 0) {
                    cout << "Invalid input. Please enter a positive number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter the width of the Rectangle: ";
                while (!(cin >> width) || width <= 0) {
                    cout << "Invalid input. Please enter a positive number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Area: " << length * width << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter the base of the Triangle: ";
                while (!(cin >> base) || base <= 0) {
                    cout << "Invalid input. Please enter a positive number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter the height of the Triangle: ";
                while (!(cin >> height) || height <= 0) {
                    cout << "Invalid input. Please enter a positive number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Area: " << (base * height) / 2 << endl;
                break;
            }
            case 4:
                cout << "Goodbye" << endl;
                break;
        }

        if (userInput != 4) {
            cout << "\n--------------------------------\n" << endl;
        }
    } while (userInput != 4);

    return 0;
}