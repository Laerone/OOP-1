#include <iostream>

// Базовий клас "транспортний засіб"
class Transport {
public:
    Transport() {
        std::cout << "Transport constructor called." << std::endl;
    }

    virtual ~Transport() {
        std::cout << "Transport destructor called." << std::endl;
    }
};

// Клас "автомобіль", що успадковується від "транспортного засобу"
class Car : public Transport {
public:
    Car() {
        std::cout << "Car constructor called." << std::endl;
    }

    ~Car() {
        std::cout << "Car destructor called." << std::endl;
    }
};

// Клас "поїзд", що успадковується від "транспортного засобу"
class Train : public Transport {
public:
    Train() {
        std::cout << "Train constructor called." << std::endl;
    }

    ~Train() {
        std::cout << "Train destructor called." << std::endl;
    }
};

// Клас "таксі", що успадковується від "автомобіля"
class Taxi : public Car {
public:
    Taxi() {
        std::cout << "Taxi constructor called." << std::endl;
    }

    ~Taxi() {
        std::cout << "Taxi destructor called." << std::endl;
    }
};

int main() {
    // Створення об'єктів різних класів
    Transport transport;
    std::cout << std::endl;

    Car car;
    std::cout << std::endl;

    Train train;
    std::cout << std::endl;

    Taxi taxi;
    std::cout << std::endl;

    return 0;
}
