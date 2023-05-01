#include "Object.h"
#include "Money.h"

void Money::Show()
{
	cout << "\nRub = " << rub;
	cout << "\nCop = " << cop;
}
Money Money::operator+(const Money& p)
{
	int rub = this->rub + p.rub + (this->cop + p.cop) / 100;
	int cop = (this->cop + p.cop) % 100;
	Money l;
	l.rub = rub;
	l.cop = cop;
	return l;
}
Money Money::operator-(const Money& p)
{
	int cop1 = this->cop - p.cop;
	int cop, rub;
	if (cop1 < 0)
	{
		rub = this->rub - p.rub + cop1 / 100 - 1;
		cop = 100 + cop1 % 100;
	}
	else
	{
		rub = this->rub - p.rub + cop1 / 100;
		cop = cop1 % 100;
	}
	Money l;
	l.rub = rub;
	l.cop = cop;
	return l;
}
double Money::operator/(const Money& p)
{
	double cop1 = this->cop + this->rub * 100;
	double cop2 = p.cop + p.rub * 100;
	double solution = (cop1 / cop2);
	return solution;
}
istream& operator>>(istream& in, Money& l)
{
	cout << "Enter Rub: "; in >> l.rub;
	cout << "Enter Cop: "; in >> l.cop;
	return in;
}
ostream& operator<<(ostream& out, const Money& l)
{
	return (out << l.rub << "," << l.cop << " Rub");
}
