#include <iostream>

class ComplexNumber {
private:
    double realPart;
    double imaginaryPart;

public:
    ComplexNumber() {
        realPart = 0.0;
        imaginaryPart = 0.0;
    }

    ComplexNumber(double real, double imaginary) {
        realPart = real;
        imaginaryPart = imaginary;
    }

    double getRealPart() const {
        return realPart;
    }

    double getImaginaryPart() const {
        return imaginaryPart;
    }

    void setRealPart(double real) {
        realPart = real;
    }

    void setImaginaryPart(double imaginary) {
        imaginaryPart = imaginary;
    }

    void print() const {
        std::cout << "(" << realPart << " ± i" << imaginaryPart << ")" << std::endl;
    }
};

ComplexNumber frd(const ComplexNumber& c1, const ComplexNumber& c2) {
    double realSum = c1.getRealPart() + c2.getRealPart();
    double imaginarySum = c1.getImaginaryPart() + c2.getImaginaryPart();
    return ComplexNumber(realSum, imaginarySum);
}

int main() {
    ComplexNumber c1(2.5, 3.7);
    ComplexNumber c2(1.8, 4.2);

    c1.print();
    c2.print();

    ComplexNumber sum = frd(c1, c2);
    sum.print();

    return 0;
}