#include "equation.h"
Equation::Equation()                //no parametr
{
	double a = 0;
	double b = 0;
	double c = 0;
	string eq = "";
}
Equation::Equation(string eq, double a, double b, double c)  //parametr
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->eq = eq;
}
Equation::Equation(const Equation& other) //copy
{
	this->a = other.a;
	this->b = other.b;
	this->c = other.c;
	this->eq = other.eq;
}
Equation::~Equation()
{
	//delete
}
//Модификаторы
void Equation::setA(double newA) { a = newA; }
void Equation::setB(double newB) { a = newB; }
void Equation::setC(double newC) { c = newC; }
void Equation::setEq(const string& newEq) { eq = newEq; }

//Селекторы
double Equation::getA() const { return a; }
double Equation::getB() const { return b; }
double Equation::getC() const { return c; }
string Equation::getEq() const { return eq; }
