#pragma once
#include <iostream>
#include "Object.h"
using namespace std;

class Pari : public Object
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
	void Show();

	Pari operator+(const Pari& p);
	friend istream& operator>>(istream& in, Pari& p);
	friend ostream& operator<<(ostream& out, const Pari& p);
};
