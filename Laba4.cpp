#include <iostream>

class DynamicArray {
private:
    double* array; // Вказівник на масив
    int size; // Розмір масиву

public:
    DynamicArray(int size) {
        this->size = size;
        array = new double[size]; // Виділення пам'яті для масиву
        generateArray(); // Генерація масиву
    }

    ~DynamicArray() {
        delete[] array; // Звільнення пам'яті
    }

    void generateArray() {
        for (int i = 0; i < size; i++) {
            if (i % 2 == 0) {
                array[i] = i + 5.1; // Вираз для парних елементів
            } else {
                array[i] = i - 4.2; // Вираз для непарних елементів
            }
        }
    }

    double getElement(int index) {
        return array[index];
    }

    int getSize() {
        return size;
    }
};

void processArray(DynamicArray& dynamicArray) {
    double sum = 0.0;
    int size = dynamicArray.getSize();

    for (int i = 1; i < size; i += 2) {
        sum += dynamicArray.getElement(i); // Знаходження суми кожного другого елемента
    }

    std::cout << "Сума кожного другого елемента: " << sum << std::endl;
}

int main() {
    int arraySize = 12;
    DynamicArray dynamicArray(arraySize);
    processArray(dynamicArray);

    return 0;
}
