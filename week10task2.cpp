#include <iostream>


class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing Shape\n";
    }
    
    virtual ~Shape() {} 
};

// Derived Classes
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Rectangle\n";
    }
};

class Triangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Triangle\n";
    }
};

int main() {
    Shape* shapePtr; 

    Circle circleObj;
    Rectangle rectObj;
    Triangle triObj;

    shapePtr = &circleObj;
    shapePtr->draw();

    shapePtr = &rectObj;
    shapePtr->draw();

    shapePtr = &triObj;
    shapePtr->draw();

    return 0;
}