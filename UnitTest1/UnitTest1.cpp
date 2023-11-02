#include "pch.h"
#include "CppUnitTest.h"
#include "../laba 6.1. rk/Source.cpp"

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
            create(arr, SIZE, 0, -19, 25);
           Assert::AreNotEqual(arr[0], 0);
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 10;
            int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int expected_sum = 43;
             Assert::AreEqual(sum(arr, SIZE, 0, 0), expected_sum);
        }

        TEST_METHOD(TestMethod3)
        {
            const int SIZE = 10;
            int arr[SIZE] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };
            updateArray(arr, SIZE, 0);
            Assert::AreEqual(arr[1], 0);
        }

       
    };
}
