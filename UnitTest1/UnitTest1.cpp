#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.2(2)/lab 6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

        TEST_METHOD(TestMethod2)
        {
            const int N = 25;
            int a[N]{};
            int min = a[0];
            int max = a[0];
            int Low = -11;
            int High = 13;
            int i = 0;
            Create(a, N, -11, 13, 0);
            Assert::AreEqual(6, MinMax(a, N, 0, a[0], a[0]), 0.0001);
        }
    };
}