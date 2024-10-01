#include "pch.h" // ������ ��������� ���������� ���������
#include "CppUnitTest.h"
#include <cmath>
#include "..\PR5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// ���������� ������� s, ��� �� �������
double s(const double x);

namespace UnitTest
{
    TEST_CLASS(SimpleTests) // ��������� �������� ����� �����
    {
    public:

        TEST_METHOD(TestSFunction) // ������� ����
        {
            // �������, �� ������� s(0) ������� 1
            Assert::AreEqual(1.0, s(0.0)); // ��� x = 0

            // �������, �� ������� s(1) ������� ��������� ��������
            Assert::AreEqual(1.05121, s(1.0), 0.0001); // ��������� �������� ��� s(1)

            // ������� ������� ��� x > 1
            Assert::AreEqual((pow(cos(2.0), 2) + 1) / exp(2.0), s(2.0), 0.0001); // ��� x = 2
        }
    };
}
