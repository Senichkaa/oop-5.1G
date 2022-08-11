#include "pch.h"
#include "CppUnitTest.h"
#include "../oop 5.1G/Triad.cpp"
#include "../oop 5.1G/Exception.cpp"
#include "../oop 5.1G/Triangle.cpp"
#include "../oop 5.1G/InheritedException.cpp"
#include "../oop 5.1G/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UToop51G
{
	TEST_CLASS(UToop51G)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle T(3, 4, 5);
			Assert::AreEqual(T.Square(), 6.0);
		}
	};
}
