#include <iostream>

class Sandglass {
private:
    int a;
    int b;

public:
    Sandglass() {
        a = 0;
        b = 0;
    }

    Sandglass(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void setA(int a) {
        this->a = a;
    }

    int getA() const {
        return a;
    }

    void setB(int b) {
        this->b = b;
    }

    int getB() const {
        return b;
    }

    int computeArea() const {
        return 0.5 * a * b;
    }

    void printInfo() const {
        std::cout << "Value a: " << a << std::endl;
        std::cout << "Value b: " << b << std::endl;
        std::cout << "Hourglass S: " << computeArea() << std::endl;
    }
};

int main() {
    // Приклад використання класу
    // Створення екземпляра зі значенням 3 для a і 5 для b
    Sandglass sandglass(3, 5);

    // Отримання значень a, b і обчислення площі
    int a_value = sandglass.getA();
    int b_value = sandglass.getB();
    int area = sandglass.computeArea();

    std::cout << "Value a: " << a_value << std::endl;
    std::cout << "Value b: " << b_value << std::endl;
    std::cout << "Hourglass S: " << area << std::endl;

    // Присвоєння нових значень для a і b
    sandglass.setA(7);
    sandglass.setB(2);

    // Виведення інформації про годинник
    sandglass.printInfo();

    return 0;
}