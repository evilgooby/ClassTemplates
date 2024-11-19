#include <iostream>
#include "DynamicArray.h"

int main() {
    try {
        // Создание массива для целых чисел
        DynamicArray<int> intArray(5);
        intArray.input();
        intArray.print();

        std::cout << "Индекс минимального элемента: " << intArray.findMinIndex() << std::endl;

        try {
            std::cout << "Произведение элементов между первыми двумя нулями: "
                      << intArray.productBetweenZeros() << std::endl;
        } catch (const std::runtime_error& e) {
            std::cerr << "Ошибка: " << e.what() << std::endl;
        }

        // Использование конструктора копирования
        DynamicArray<int> copiedArray = intArray;
        std::cout << "\nСодержимое скопированного массива:" << std::endl;
        copiedArray.print();

        // Проверка работы с массивом вещественных чисел
        DynamicArray<double> doubleArray(5);
        doubleArray.input();
        doubleArray.print();

        std::cout << "Индекс минимального элемента: " << doubleArray.findMinIndex() << std::endl;

        try {
            std::cout << "Произведение элементов между первыми двумя нулями: "
                      << doubleArray.productBetweenZeros() << std::endl;
        } catch (const std::runtime_error& e) {
            std::cerr << "Ошибка: " << e.what() << std::endl;
        }

        std::cout << "Количество созданных объектов класса c типом int: " << DynamicArray<int>::getObjectCount() << std::endl;
        std::cout << "Количество созданных объектов класса c типом double: " << DynamicArray<double>::getObjectCount() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
