#pragma once
#include <iostream>
#include <string>
using namespace std;

class Equation
{
	double a;
	double b;
	double c;
	string eq;

public:
	
	Equation();
	Equation(string eq, double a, double b, double c);
	Equation(const Equation& other);
	~Equation();

	//setters
	void setA(double newA);
	void setB(double newB);
	void setC(double newC);
	void setEq(const string& newEq);

	//getters
	double getA() const;
	double getB() const;
	double getC() const;
	string getEq() const;

};