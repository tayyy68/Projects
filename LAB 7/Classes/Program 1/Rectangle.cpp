#include "Rectangle.h"

// Default constructor (initializes length and width to 0)
Rectangle::Rectangle() : length(0.0f), width(0.0f) {}

// Destructor (does nothing)
Rectangle::~Rectangle() {}

// Setters
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

// Getters
float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

// Calculate area
float Rectangle::calculateArea() const {
    return length * width;
}