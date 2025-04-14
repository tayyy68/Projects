#include "triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}
    Triangle::Triangle(float b, float h) : base(b), height(h) {}
    Triangle::~Triangle() {}
    
    float Triangle::getBase() const {
        return base;
    }
    
    float Triangle::getHeight() const {
        return height;
    }
    
    void Triangle::setBase(float b) {
        base = b;
    }
    
    void Triangle::setHeight(float h) {
        height = h;
    }
}