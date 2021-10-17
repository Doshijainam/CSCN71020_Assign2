#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task2
{
	TEST_CLASS(Task2)
	{
	public:
		
		TEST_METHOD(Test1_setLength)
		{
			int input = 1;
			int length = 1;
			setLength(input, &length);
			Assert::IsTrue(1,);
			
			
		}
	};
}
