#pragma once
#include <iostream>
using namespace std;

class Pari
{
	int first, second;

public:

	Pari() { first = 0, second = 0; };
	Pari(int f, int s) { first = f, second = s; };
	Pari(const Pari& p) { first = p.first; second = p.second; };
	~Pari() {};

	int get_first() { return first; };
	int get_second() { return second; };
	void set_first(int f) { first = f; };
	void set_second(int s) { second = s; };

	Pari operator+(const Pari&);
	Pari Sum(Pari one, Pari two);
	friend istream& operator>>(istream& in, Pari& p);
	friend ostream& operator<<(ostream& out, const Pari& p);
};
class Money : public Pari
{
	int rub, cop;

public:
	
	Money operator+(const Money&);
	Money operator-(const Money&);
	double operator/(const Money&);
	friend istream& operator>>(istream& in, Money& l);
	friend ostream& operator<<(ostream& out, const Money& l);
};
