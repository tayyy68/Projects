#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;
    public:
        Triangle(); // Default constructor
        Triangle(float b, float h); // Overloaded constructor
        ~Triangle(); // Destructor
        
        // Accessor methods
        float getBase() const;
        float getHeight() const;
        void setBase(float b);
        void setHeight(float h);
    };
}

#endif