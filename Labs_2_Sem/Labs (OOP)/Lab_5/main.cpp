#include "Object.h"
#include "vector.h"

int main()
{
	Pari one;
	Pari two;
	cin >> one;
	cin >> two;
	cout << endl;
	cout << "Sum is: " << one + two << endl;
	cout << "-------------------------------------------------" << endl;
	Money a;
	Money b;
	cin >> a;
	cin >> b;
	cout << endl;
	cout << "Division result" << endl;
	cout << a / b << endl;
	cout << "Subtraction result" << endl;
	cout << a - b << endl;
	cout << "Result of addition" << endl;
	cout << a + b << endl;
	cout << "-------------------------------------------------";
	Vector v(5);
	Pari* p = &one;
	Pari* m = &two;
	Money* l = &a;
	Money* k = &b;
	v.Add(p);
	v.Add(m);
	v.Add(l);
	v.Add(k);
	cout << v;
}

