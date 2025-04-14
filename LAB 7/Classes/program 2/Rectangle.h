#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();                    
    Rectangle(float l, float w);     
    ~Rectangle();                    

    // Accessor methods (setters)
    void setLength(float l);
    void setWidth(float w);

    // Accessor methods (getters)
    float getLength() const;
    float getWidth() const;

    // Calculate area
    float calculateArea() const;
};

#endif