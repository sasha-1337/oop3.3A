#include "pch.h"
#include "CppUnitTest.h"
#include "../oop3.3A/Money.h"
#include "D:\Student\oop3.3A\oop3.3A\Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a;
			bool t;
			t = a.Init(1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.10);
			Assert::AreEqual(t, true);
		}
	};
}
