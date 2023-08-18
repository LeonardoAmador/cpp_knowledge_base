#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() {
        return 0;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) {
        this->width = width;
        this->height = height;
    }

    double area() override {
        return width * height;
    }

private:
    double width;
    double height;
};

class Circle : public Shape {
public:
    Circle(double radius) {
        this->radius = radius;
    }

    double area() override {
        return M_PI * pow(radius, 2);
    }

private:
    double radius;
};

double calculateArea(Shape* shape) {
    if (dynamic_cast<Shape*>(shape)) {
        return shape->area();
    } else {
        cout << "Invalid shape" << endl;
        return 0;
    }
}

class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double base, double height) : base(base), height(height) {}

    double getBase() {
        return base;
    }

    void setBase(double value) {
        if (value <= 0) {
            cout << "Invalid Base" << endl;
        } else {
            base = value;
        }
    }

    double getHeight() {
        return height;
    }

    void setHeight(double value) {
        if (value <= 0) {
            cout << "Invalid Height" << endl;
        } else {
            height = value;
        }
    }

    double area() {
        return 0.5 * base * height;
    }
};

int main() {
    Rectangle rect(5, 10);
    Circle circle(7);

    cout << calculateArea(&rect) << endl;
    cout << calculateArea(&circle) << endl;

    Triangle* newTriangle = new Triangle(0, 0);

    newTriangle->setBase(6);
    newTriangle->setHeight(4);

    cout << newTriangle->area() << endl;

    return 0;
}

