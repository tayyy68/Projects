#include "area.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include <cmath>

namespace shapes {
    float Area::calculateArea(const Square& square) {
        float side = square.getSideLength();
        return side * side;
    }
    
    float Area::calculateArea(const Triangle& triangle) {
        return 0.5f * triangle.getBase() * triangle.getHeight();
    }
    
    float Area::calculateArea(const Circle& circle) {
        return M_PI * circle.getRadius() * circle.getRadius();
    }
}