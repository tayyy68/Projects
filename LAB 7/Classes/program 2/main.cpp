#include <iostream>
#include "Rectangle.h"

int main() {

    Rectangle rect1;
    float length, width;

    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;
    rect1.setLength(length);

    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;
    rect1.setWidth(width);

    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << std::endl;

    
    float length2, width2;
    std::cout << "\nEnter the length of the second rectangle: ";
    std::cin >> length2;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width2;

    Rectangle rect2(length2, width2);

    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << std::endl;

    return 0;
}