#include <iostream>

using namespace std;

int inputA() {
	int a;
	cout << "Введите число А: ";
	cin >> a;
	return a;
}

int inputB() {
	int b;
	cout << "Введите число B: ";
	cin >> b;
	return b;
}

int Diff(int A, int B) {
	return (A-B);
}

int Sum(int A, int B) {
	int sum = A + B;
	return sum;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	int function, A = 0, B = 0;
	while (true)
	{
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