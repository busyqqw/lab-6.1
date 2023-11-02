#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int SIZE = 10;
            int arr[SIZE];
            create(arr, SIZE);
            Assert::AreNotEqual(arr[0], 0);
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 10;
            int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int expected_sum = 43;
            Assert::AreEqual(sum(arr, SIZE), expected_sum);
        }

        
    };
}
