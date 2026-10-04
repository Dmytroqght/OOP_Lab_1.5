#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_1.5/Time.h"
#include "../OOP_Lab_1.5/Time.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CompositionTests
{
    TEST_CLASS(TimeComparisonTests)
    {
    public:

        TEST_METHOD(TestIsGreater)
        {
            Time t1, t2;
            t1.Init(14, 30, 0);
            t2.Init(14, 29, 59);

            Assert::IsTrue(t1.isGreater(t2));
            Assert::IsFalse(t2.isGreater(t1));
        }

        TEST_METHOD(TestIsLess)
        {
            Time t1, t2;
            t1.Init(8, 15, 0);
            t2.Init(10, 0, 0);

            Assert::IsTrue(t1.isLess(t2));
            Assert::IsFalse(t2.isLess(t1));
        }

        TEST_METHOD(TestIsEqual)
        {
            Time t1, t2;
            t1.Init(23, 59, 59);
            t2.Init(23, 59, 59);

            Assert::IsTrue(t1.isEqual(t2));
        }
    };
}