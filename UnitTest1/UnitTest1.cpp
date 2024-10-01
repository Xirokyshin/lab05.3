#include "pch.h" // Імпорт заголовка попередньої компіляції
#include "CppUnitTest.h"
#include <cmath>
#include "..\PR5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// Декларація функції s, яку ми тестуємо
double s(const double x);

namespace UnitTest
{
    TEST_CLASS(SimpleTests) // Створення простого класу тестів
    {
    public:

        TEST_METHOD(TestSFunction) // Простий тест
        {
            // Тестуємо, що функція s(0) повертає 1
            Assert::AreEqual(1.0, s(0.0)); // Для x = 0

            // Тестуємо, що функція s(1) повертає правильне значення
            Assert::AreEqual(1.05121, s(1.0), 0.0001); // Приблизне значення для s(1)

            // Тестуємо функцію для x > 1
            Assert::AreEqual((pow(cos(2.0), 2) + 1) / exp(2.0), s(2.0), 0.0001); // Для x = 2
        }
    };
}
