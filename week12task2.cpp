#include <iostream>

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    Shape* shapePtr;

    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    shapePtr = &c;
    std::cout << "Circle Area: " << shapePtr->calculateArea() << "\n";

    shapePtr = &r;
    std::cout << "Rectangle Area: " << shapePtr->calculateArea() << "\n";

    return 0;
}