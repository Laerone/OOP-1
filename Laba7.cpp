#include <iostream>
#include <cmath>
#include <vector>

// Abstract base class "GeometricShape"
class GeometricShape {
public:
    virtual double getArea() const = 0;
    virtual ~GeometricShape() = 0;
};

GeometricShape::~GeometricShape() = default;

// Class "Triangle" inheriting from "GeometricShape"
class Triangle : public GeometricShape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    double getArea() const override {
        return 0.5 * base * height;
    }
};

// Class "Trapezoid" inheriting from "GeometricShape"
class Trapezoid : public GeometricShape {
private:
    double base1;
    double base2;
    double height;

public:
    Trapezoid(double base1, double base2, double height) : base1(base1), base2(base2), height(height) {}

    double getArea() const override {
        return 0.5 * (base1 + base2) * height;
    }
};

// Class "EquilateralTriangle" inheriting from "Triangle"
class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side) : Triangle(side, (side * std::sqrt(3)) / 2) {}
};

int main() {
    std::vector<GeometricShape*> shapes;

    Triangle triangle(5, 4);
    Trapezoid trapezoid(3, 6, 4);
    EquilateralTriangle equilateralTriangle(6);

    shapes.push_back(&triangle);
    shapes.push_back(&trapezoid);
    shapes.push_back(&equilateralTriangle);

    for (const auto& shape : shapes) {
        std::cout << "Area: " << shape->getArea() << std::endl;
    }

    return 0;
}
