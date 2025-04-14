#ifndef AREA_H
#define AREA_H

namespace shapes {
    class Square;
    class Triangle;
    class Circle;
    
    class Area {
    public:
        static float calculateArea(const Square& square);
        static float calculateArea(const Triangle& triangle);
        static float calculateArea(const Circle& circle);
    };
}

#endif