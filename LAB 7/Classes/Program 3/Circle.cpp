#include "circle.h"

namespace shapes {
    Circle::Circle() : radius(0) {}
    Circle::Circle(float r) : radius(r) {}
    Circle::~Circle() {}
    
    float Circle::getRadius() const {
        return radius;
    }
    
    void Circle::setRadius(float r) {
        radius = r;
    }
}