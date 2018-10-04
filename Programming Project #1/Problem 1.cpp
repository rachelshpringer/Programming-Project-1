//Rachel Shpringer
//CS20A
//Programming Project #1
//Problem 1: Shapes
//Due: September 19, 2018


#include <iostream>
#include <string>

using namespace std;


//CREATING CLASSES AND SUBCLASSES

class Shape {
public:
    Shape();
    ~Shape();
    virtual double area();
};


class Rectangle : public Shape {
public:
    double area();
    void setWidth(double x);
    void setHeight(double y);

private:
    double width, height;
};

class Triangle : public Shape {
public:
    double area();
    void setWidth(double x);
    void setHeight(double y);
private:
    double width, height;
};



// MAIN FUNCTION

int main() {

    double x;
    double y;

    cout << "Enter a value for Width, x:";
    cin >> x;
    cout << endl;
    cout << "Enter a value for Height, y:";
    cin >> y;
    cout << endl << endl;

    Rectangle rect;
    rect.setWidth(x);
    rect.setHeight(y);
    
    Triangle tri;
    tri.setWidth(x);
    tri.setHeight(y);
    
    cout << "The area of a rectangle with width " << x << " and height " << y << " is: " << rect.area() << endl;
    cout << "The area of a triangle with base " << x << " and height " << y << " is: " << tri.area() << endl;
    
    return 0;
    
}


//CONTSTRUCTORS AND GET/SET FUNCTIONS FOR SHAPE
Shape::Shape() {
}
Shape::~Shape() {
}

double Shape::area() {
    double area = 0.0;
    return area;
}


//CONTSTRUCTORS AND SET FUNCTIONS

double Rectangle::area() {
    double area = width * height;
    return area;
}

void Rectangle::setWidth(double x) {
    width = x;
}

void Rectangle::setHeight(double y) {
    height = y;
}



double Triangle::area() {
    double area = (width * height)/2;
    return area;
}

void Triangle::setWidth(double x) {
    width = x;
}

void Triangle::setHeight(double y) {
    height = y;
}

