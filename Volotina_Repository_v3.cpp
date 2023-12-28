#include <iostream>

using namespace std;

int inputA() {
}

int inputB() {
}

int Sum(int A, int B) {
	return (A + B);
}

int Diff(int A, int B) {
}

int main()
{
    setlocale(LC_ALL, "Russian");

	int function, A = 0, B = 0;
	cout << "1 - Ввести число А\n2 - Ввести число В\n3 - Выполнить операцию сложение\n4 - Выполнить операцию вычитание\n";
	cout << "\nВведите номер функции: ";
	cin >> function;

	switch (function)
	{
		case 1:
		{
			A = inputA();
			break;
		}
		case 2:
		{
			B = inputB();
			break;
		}
		case 3:
		{
			if (!(A & B))
			{
				cout << "\nСначала надо ввести числа!\n\n";
				break;
			}
			Sum(A, B);
			break;
		}
		case 4:
		{
			if (!(A & B))
			{
				cout << "\nСначала надо ввести числа!\n\n";
				break;
			}
			Diff(A, B);
			break;
		}
		default:
			break;
	}

	main();
}