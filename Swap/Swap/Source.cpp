#include <iostream>

using namespace std;

/// <summary>
/// Swap two integers (a and b) without using a temporary value.
/// </summary>

void multiply_swap(int & a, int & b)
{
	a = a * b;
	b = a / b;
	a = a / b;
}

void addition_swap(int & a, int & b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

int main()
{
	int a, b;

	cout << "Input a number for a: ";
	cin >> a;
	cout << endl << endl;

	cout << "Input a number for b: ";
	cin >> b;
	cout << endl << endl;

	addition_swap(a, b);

	cout << "The value of a is : " << a << endl;
	cout << "The value of b is : " << b << endl;

	system("Pause");
	return 0;
}