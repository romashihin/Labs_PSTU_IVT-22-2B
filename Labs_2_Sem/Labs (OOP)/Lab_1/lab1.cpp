#include "lab1.h"

void Clock::Minutes()
{
	cout << "Enter time in hours: ";
	cin >> first;
	second = first * 60;
	cout << "Your time in minutes is: ";
	cout << second << endl;
}