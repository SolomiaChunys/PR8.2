#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.2/PR8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* s = new char[30]{ "blue is so beautiful" };
			int k = 0;
			int t =Count(s);
			Assert::AreEqual(2, t);
		}
	};
}
