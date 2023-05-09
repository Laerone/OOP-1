#include <iostream>

class Sandglass {
private:
    int a;  // Приватна змінна-член "a"

    int b;  // Приватна змінна-член "b"

public:
    Sandglass() {
        a = 0;  // Конструктор за замовчуванням, що встановлює значення "a" на 0
        b = 0;  // Конструктор за замовчуванням, що встановлює значення "b" на 0
    }

    Sandglass(int a, int b) {
        this->a = a;  // Конструктор, що ініціалізує "a" заданою величиною
        this->b = b;  // Конструктор, що ініціалізує "b" заданою величиною
    }

    void setA(int a) {
        this->a = a;  // Метод-сетер для оновлення значення "a"
    }

    int getA() const {
        return a;  // Метод-гетер для доступу до значення "a"
    }

    void setB(int b) {
        this->b = b;  // Метод-сетер для оновлення значення "b"
    }

    int getB() const {
        return b;  // Метод-гетер для доступу до значення "b"
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
    // Створення екземпляра зі значенням 3 для a і 5 для b
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
