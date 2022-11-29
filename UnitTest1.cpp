#include "pch.h"
#include "CppUnitTest.h"
#include "D:\LAB\Lab5.1\Lab5.1\Lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(calculate_Tests)
	{
	public:
		TEST_METHOD(calculate7_and_minus1_24rtn)
		{
			int n = 4;
			int x = 7;
			int expec = 14;
			int actual = y(n, x);
			Assert::AreEqual(expec, actual);
		}

	public:
		TEST_METHOD(calculate3_and_5_1306rtn)
		{
			int n = 4;
			int x = 8;
			int expec = 1306;
			int actual = y(n, x);
			Assert::AreEqual(expec, actual);
		}
	};

	TEST_CLASS(checkValidParams_Tests)
	{
	public:
		TEST_METHOD(checkValidParams_minus100)
		{
			int n = -8;
			int x = -16;
			try
			{
				checkValidParams(n, x);
				Assert::Fail();
			}
			catch (...) {
				Assert::IsTrue(true);
			}
		}
	};
}

