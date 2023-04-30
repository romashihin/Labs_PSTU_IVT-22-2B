#include "lab4.h"

int main()
{
	Pari one;
	Pari two;
	cin >> one;
	cin >> two;
	cout << "-------------------------------------------------" << endl;
	cout << "Sum is: " << one + two << endl;
	Money a;
	Money b;
	cin >> a;
	cin >> b;
	cout << "-------------------------------------------------" << endl;
	cout << "Division result" << endl;
	cout << a / b << endl;
	cout << "Subtraction result" << endl;
	cout << a - b << endl;
	cout << "Result of addition" << endl;
	cout << a + b << endl;
}