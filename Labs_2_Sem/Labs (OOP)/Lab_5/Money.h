#pragma once
#include "Pari.h"
#include "Object.h"

class Money : public Pari
{
	int rub, cop;

public:

	void Show();
	Money operator+(const Money& p);
	Money operator-(const Money& p);
	double operator/(const Money& p);
	friend istream& operator>>(istream& in, Money& l);
	friend ostream& operator<<(ostream& out, const Money& l);

};