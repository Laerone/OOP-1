#include <iostream>

class ComplexNumber {
private:
    double realPart;            // Приватне поле, яке зберігає дійсну частину комплексного числа
    double imaginaryPart;       // Приватне поле, яке зберігає уявну частину комплексного числа

public:
    ComplexNumber() {
        realPart = 0.0;         // Конструктор за замовчуванням, ініціалізує дійсну та уявну частини нулями
        imaginaryPart = 0.0;
    }

    ComplexNumber(double real, double imaginary) {
        realPart = real;        // Конструктор, який приймає значення дійсної та уявної частин комплексного числа і ініціалізує поля цими значеннями
        imaginaryPart = imaginary;
    }

    double getRealPart() const {
        return realPart;        // Метод, який повертає значення дійсної частини комплексного числа
    }

    double getImaginaryPart() const {
        return imaginaryPart;   // Метод, який повертає значення уявної частини комплексного числа
    }

    void setRealPart(double real) {
        realPart = real;        // Метод, який встановлює значення дійсної частини комплексного числа
    }

    void setImaginaryPart(double imaginary) {
        imaginaryPart = imaginary;  // Метод, який встановлює значення уявної частини комплексного числа
    }

    void print() const {
        std::cout << "(" << realPart << " ± i" << imaginaryPart << ")" << std::endl;  // Метод, який виводить комплексне число у вигляді (a ± ib)
    }
};

ComplexNumber frd(const ComplexNumber& c1, const ComplexNumber& c2) {
    double realSum = c1.getRealPart() + c2.getRealPart();                      // Функція, яка додає два комплексних числа разом
    double imaginarySum = c1.getImaginaryPart() + c2.getImaginaryPart();
    return ComplexNumber(realSum, imaginarySum);                               // Повертає нове комплексне число, яке є сумою двох вхідних
}

int main() {
    ComplexNumber c1(2.5, 3.7);                                                 // Створення об'єкту c1 класу ComplexNumber зі значеннями 2.5 і 3.7 для дійсної та уявної частин відповідно
    ComplexNumber c2(1.8, 4.2);                                                

    c1.print();
    c2.print();

    ComplexNumber sum = frd(c1, c2);
    sum.print();

    return 0;
}
