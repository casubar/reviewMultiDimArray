#include "stdafx.h"
#include "CppUnitTest.h"

#include "../reviewMultiDimArray/reviewMultiDimArray_Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1_reviewMultiDimArray
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(sum(2, 3), 5);
		}

	};
}