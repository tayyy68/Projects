#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace std;
using namespace shapes;

void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Calculate area of a square\n";
    cout << "2. Calculate area of a triangle\n";
    cout << "3. Calculate area of a circle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    bool running = true;
    
    while (running) {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1: {
                float side;
                cout << "Enter side length of the square: ";
                cin >> side;
                
                Square square(side);
                float area = Area::calculateArea(square);
                cout << "Area of the square: " << area << endl;
                break;
            }
            case 2: {
                float base, height;
                cout << "Enter base of the triangle: ";
                cin >> base;
                cout << "Enter height of the triangle: ";
                cin >> height;
                
                Triangle triangle(base, height);
                float area = Area::calculateArea(triangle);
                cout << "Area of the triangle: " << area << endl;
                break;
            }
            case 3: {
                float radius;
                cout << "Enter radius of the circle: ";
                cin >> radius;
                
                Circle circle(radius);
                float area = Area::calculateArea(circle);
                cout << "Area of the circle: " << area << endl;
                break;
            }
            case 4:
                running = false;
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    
    return 0;
}