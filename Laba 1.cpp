#include <iostream>

class Sandglass {
private:
    int a;  

    int b; 

public:
    Sandglass() {
        a = 0;  // Конструктор за замовчуванням, що встановлює значення "a" на 0
        b = 0;  
    }

    Sandglass(int a, int b) {
        this->a = a;  // Конструктор, що ініціалізує "a" заданою величиною
        this->b = b;  
    }

    void setA(int a) {
        this->a = a;  // Метод-сетер для оновлення значення "a"
    }

    int getA() const {
        return a;  // Метод-гетер для доступу до значення "a"
    }

    void setB(int b) {
        this->b = b;  
    }

    int getB() const {
        return b;  
    }

    int computeArea() const {
        return 0.5 * a * b;  // Метод для обчислення площі
    }

    void printInfo() const {
        std::cout << "Value a: " << a << std::endl;  // Виведення значення "a"
        std::cout << "Value b: " << b << std::endl;  // Виведення значення "b"
        std::cout << "Hourglass S: " << computeArea() << std::endl;  // Виведення площі годинника
    }
};

int main() {
    // Приклад використання класу
    Sandglass sandglass(3, 5);

    // Отримання значень a, b і обчислення площі
    int a_value = sandglass.getA();
    int b_value = sandglass.getB();
    int area = sandglass.computeArea();

    std::cout << "Value a: " << a_value << std::endl;  // Виведення значення "a"
    std::cout << "Value b: " << b_value << std::endl;  // Виведення значення "b"
    std::cout << "Hourglass S: " << area << std::endl;  // Виведення площі годинника

    // Присвоєння нових значень для a і b
    sandglass.setA(7);
    sandglass.setB(2);

    // Виведення інформації про годинник
    sandglass.printInfo();

    return 0;
}
