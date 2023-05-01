#include "Object.h"
#include "Pari.h"

void Pari::Show()
{
	cout << "\nFirst = " << first;
	cout << "\nSecond = " << second;
}
Pari Pari::operator+(const Pari& p)
{
	int first = this->first + this->second;
	int second = p.first + p.second;
	Pari l;
	l.first = first;
	l.second = second;
	return l;
}
istream& operator>>(istream& in, Pari& p)
{
	cout << "Enter first: "; in >> p.first;
	cout << "Enter second: "; in >> p.second;
	return in;
}
ostream& operator<<(ostream& out, const Pari& p)
{
	return (out << "First = " << p.first << "  Second = " << p.second);
}

