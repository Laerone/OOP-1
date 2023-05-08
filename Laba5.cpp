#include <iostream>

class Hourglass {
private:
    int a; // Параметр a
    int b; // Параметр b

public:
    Hourglass() {
        a = 0;
        b = 0;
    }

    Hourglass(int a, int b) {
        this->a = a;
        this->b = b;
    }

    int getA() const {
        return a;
    }

    void setA(int aValue) {
        a = aValue;
    }

    int getB() const {
        return b;
    }

    void setB(int bValue) {
        b = bValue;
    }

    int getArea() const {
        return a * b;
    }

    Hourglass operator+(const Hourglass& other) {
        int newA = a + other.a;
        int newB = b + other.b;
        return Hourglass(newA, newB);
    }

    Hourglass& operator++() {
        ++a;
        ++b;
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const Hourglass& hourglass) {
        os << "a = " << hourglass.a << ", b = " << hourglass.b << ", Area = " << hourglass.getArea();
        return os;
    }
};

int main() {
    Hourglass hourglass1(3, 4);
    Hourglass hourglass2(5, 7);

    std::cout << "Hourglass 1: " << hourglass1 << std::endl;
    std::cout << "Hourglass 2: " << hourglass2 << std::endl;

    Hourglass sum = hourglass1 + hourglass2;
    std::cout << "Sum of hourglass 1 and hourglass 2: " << sum << std::endl;

    ++hourglass1;
    std::cout << "Hourglass 1 after increment: " << hourglass1 << std::endl;

    return 0;
}
