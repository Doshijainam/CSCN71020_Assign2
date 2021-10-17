#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task1
{
	TEST_CLASS(Task1)
	{
	public:
		
		TEST_METHOD(Test_Perimeter)
		{
			int length = 1, width = 1;
			int perimeter = 0;
			perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(4, perimeter);
		}

		TEST_METHOD(Test_Area)
		{
			int length = 2, width = 2;
			int area = 0;
			area = getArea(&length, &width);
			Assert::AreEqual(4, area);
		}

		TEST_METHOD(Test1_setLength)
		{
			int input = 1;
			int length;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(Test2_setLength)
		{
			int input = 99;
			int length;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(Test3_setLength)
		{
			int input = 105;
			int length;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(Test1_setWidth)
		{
			int input = 1;
			int width;
			setLength(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(Test2_setWidth)
		{
			int input = 99;
			int width;
			setLength(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(Test3_setWidth)
		{
			int input = 105;
			int width;
			setLength(input, &width);
			Assert::AreEqual(input, width);
		}

	};
}
