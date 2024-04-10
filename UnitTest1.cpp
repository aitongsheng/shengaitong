#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int sum = 0;
			std::vector<int> a = { };
			Assert::AreEqual(sum, maxSubArraySum(a));
		}

		TEST_METHOD(TestMethod2)
		{
			int sum = 0;
			std::vector<int> a = { -1, -2, -3 };
			Assert::AreEqual(sum, maxSubArraySum(a));
		}

		TEST_METHOD(TestMethod3)
		{
			int sum = 20;
			std::vector<int> a = { -2, 11, -4, 13, -5, -2 };
			Assert::AreEqual(sum, maxSubArraySum(a));
		}
		TEST_METHOD(TestMethod4)
		{
			int sum = 7;
			std::vector<int> a = { -2, -3, 4, -1, -2, 1, 5, -3 };
			Assert::AreEqual(sum, maxSubArraySum(a));
		}

		TEST_METHOD(TestMethod5)
		{
			int sum = 10;
			std::vector<int> a = { 1, 2, 3, 4 };
			Assert::AreEqual(sum, maxSubArraySum(a));
		}
	};
}
