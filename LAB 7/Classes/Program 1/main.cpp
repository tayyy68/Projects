#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rect; // Create an instance of Rectangle

    float length, width;

    // Get user input for length and width
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    rect.setLength(length);

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    rect.setWidth(width);

    // Calculate and display the area
    std::cout << "The area of the rectangle is: " << rect.calculateArea() << std::endl;

    return 0;
}