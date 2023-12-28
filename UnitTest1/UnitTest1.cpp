#include "pch.h"
#include "CppUnitTest.h"
#include "../Volotina_Repository_v3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(negateMenuTest)
		{
			int function = -1;

			bool expected = false;

			bool actual = menuUserInput(function);

			Assert::AreEqual(expected, actual, L"Выход за пределы меню (отрицательный)");
		}

		TEST_METHOD(positiveMenuTest)
		{
			int function = 5;

			bool expected = false;

			bool actual = menuUserInput(function);

			Assert::AreEqual(expected, actual, L"Выход за пределы меню (положительный)");
		}

		TEST_METHOD(nullMenuTest)
		{
			int function = NULL;

			bool expected = false;

			bool actual = menuUserInput(function);

			Assert::AreEqual(expected, actual, L"Выход за пределы меню (NULL)");
		}

		TEST_METHOD(calcAplusB)
		{
			int A = 2;
			int B = 2;

			int expected = A + B;

			int actual = Sum(A, B);

			Assert::AreEqual(expected, actual, L"Неправильно рассчитывается сумма");
		}

		TEST_METHOD(calcAminusB)
		{
			int A = 2;
			int B = 2;

			int expected = A - B;

			int actual = Diff(A, B);

			Assert::AreEqual(expected, actual, L"Неправильно рассчитывается разность");
		}
	};
}
