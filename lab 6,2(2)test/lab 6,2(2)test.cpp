#include "pch.h"
#include "CppUnitTest.h"
#include <objidlbase.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab622test
{
    TEST_CLASS(lab622test)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int c;
            int i = 0;
            int a[] = { 1, -2, 3, -4, 5 };
            int size = 5;
            c = (a, size, i + 1);
            Assert::AreEqual(c, 1);
        }
    };
}
