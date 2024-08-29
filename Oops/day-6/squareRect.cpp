#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() {
        cout << "Area of shape" << endl;
        return 0;
    }
};
class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    virtual double area()
    {
        return side * side;
    }
};
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    virtual double area()
    {
        return length * width;
    }
};
int main() {
    Shape *shapePtr;
    Square sq(5.0);
    Rectangle rect(4.0, 6.0);
    shapePtr = &sq;
    cout << "Area of square: " << shapePtr->area() << endl;
    shapePtr = &rect;
    cout << "Area of rectangle: " << shapePtr->area() << endl;
    return 0;
}
