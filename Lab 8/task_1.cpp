#include <iostream>
#include<cmath>
using namespace std;

class Shape {
public:
    void whoAmI() {
        cout << "I am a shape."<<endl;
    }
};

class TwoDimensionalShape : public Shape {
public:
    void whoAmI() {
        cout << "I am a two-dimensional shape." <<endl;
    }
};

class ThreeDimensionalShape : public Shape {
public:
    void whoAmI() {
        cout << "I am a three-dimensional shape." <<endl;
    }
};

class Square : public TwoDimensionalShape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() {
        return side * side;
    }

    double perimeter() {
        return 4 * side;
    }

    void whoAmI() {
        cout << "I am a Square. ";
        TwoDimensionalShape::whoAmI();
    }
};

class Circle : public TwoDimensionalShape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() {
        return 3.14 * radius * radius;
    }

    double perimeter() {
        return 2 * 3.14 * radius;
    }

    void whoAmI() {
        cout << "I am a Circle. ";
        TwoDimensionalShape::whoAmI();
    }
};

class Triangle : public TwoDimensionalShape {
private:
    double a, b, c;

public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() {
        return a + b + c;
    }

    void whoAmI() {
        cout << "I am a Triangle. ";
        TwoDimensionalShape::whoAmI();
    }
};

class Rectangle : public TwoDimensionalShape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() {
        return length * width;
    }

    double perimeter() {
        return 2 * (length + width);
    }

    void whoAmI() {
        cout << "I am a Rectangle. ";
        TwoDimensionalShape::whoAmI();
    }
};

class Cube : public ThreeDimensionalShape {
private:
    double side;

public:
    Cube(double s) : side(s) {}

    double surfaceArea() {
        return 6 * side * side;
    }

    double volume() {
        return side * side * side;
    }

    void whoAmI() {
        cout << "I am a Cube. ";
        ThreeDimensionalShape::whoAmI();
    }
};

class Sphere : public ThreeDimensionalShape {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    double surfaceArea() {
        return 4 * 3.14 * radius * radius;
    }

    double volume() {
        return (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }

    void whoAmI() {
        cout << "I am a Sphere. ";
        ThreeDimensionalShape::whoAmI();
    }
};

class Cylinder : public ThreeDimensionalShape {
private:
    double radius, height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double surfaceArea() {
        return 2 * 3.14 * radius * height + 2 * 3.14 * radius * radius;
    }

    double volume() {
        return 3.14 * radius * radius * height;
    }

    void whoAmI() {
        cout << "I am a Cylinder. ";
        ThreeDimensionalShape::whoAmI();
    }
};

class Cone : public ThreeDimensionalShape {
private:
    double radius, height;

public:
    Cone(double r, double h) : radius(r), height(h) {}

    double surfaceArea() {
        double l = sqrt(radius * radius + height * height);
        return 3.14 * radius * (radius + l);
    }

    double volume() {
        return (1.0 / 3.0) * 3.14 * radius * radius * height;
    }

    void whoAmI() {
        cout << "I am a Cone. ";
        ThreeDimensionalShape::whoAmI();
    }
};

int main() {
    Square square(5);
    Circle circle(3);
    Triangle triangle(3, 4, 5);
    Rectangle rectangle(6, 8);
    Cube cube(4);
    Sphere sphere(2);
    Cylinder cylinder(3, 5);
    Cone cone(4, 6);

    square.whoAmI();
    cout << "Area: " << square.area() << ", Perimeter: " << square.perimeter() <<endl;

    circle.whoAmI();
    cout << "Area: " << circle.area() << ", Circumference: " << circle.perimeter() <<endl;

    triangle.whoAmI();
    cout << "Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() <<endl;

    rectangle.whoAmI();
    cout << "Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() <<endl;

    cube.whoAmI();
    cout << "Surface Area: " << cube.surfaceArea() << ", Volume: " << cube.volume() <<endl;

    sphere.whoAmI();
    cout << "Surface Area: " << sphere.surfaceArea() << ", Volume: " << sphere.volume() <<endl;

    cylinder.whoAmI();
    cout << "Surface Area: " << cylinder.surfaceArea() << ", Volume: " << cylinder.volume() <<endl;

    cone.whoAmI();
    cout << "Surface Area: " << cone.surfaceArea() << ", Volume: " << cone.volume() <<endl;

    return 0;
}

