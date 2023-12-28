#include <iostream>

using namespace std;

bool UserInput(int input)
{
	if (input == NULL)
		return false;
	return true;
}

bool menuUserInput(int func)
{
	if (func < 1 || func > 4)
		return false;
	return true;
}

int Diff(int A, int B) {
	return (A - B);
}

int Sum(int A, int B) {
	return (A + B);
}

int main()
{
    setlocale(LC_ALL, "Russian");
	int function, A = NULL, B = NULL;
	while (true)
	{
		cout << "\n1 - Ввести число А\n2 - Ввести число В\n3 - Выполнить операцию сложение\n4 - Выполнить операцию вычитание\n";
		cout << "\nВведите номер функции: ";
		cin >> function;
		while (!menuUserInput(function))
		{
			cout << "\nВведите номер функции: ";
			cin >> function;
		}

		switch (function)
		{
			case 1:
			{
				while (!UserInput(A)) {
					cout << "\nВведите число А: ";
					cin >> A;
				}
				break;
			}
			case 2:
			{
				while (!UserInput(B)) {
					cout << "\nВведите число B: ";
					cin >> B;
				}
				break;
			}
			case 3:
			{
				cout << "Сумма A и B: " << Sum(A, B) << endl;
				break;
			}
			case 4:
			{
				cout << "Разность A и B: " << Diff(A, B) << endl;
				break;
			}
			default:
				break;
		}
	}
}