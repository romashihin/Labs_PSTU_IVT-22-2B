#include <iostream>

using namespace std;

class Clock
{
	
public:

	int first; //h
	int second;  //min

	void Minutes()
	{
		cout << "Enter time in hours: ";
		cin >> first;
		second = first * 60;
		cout << "Your time in minutes is: ";
		cout << second << endl;
	}
};

int main()
{
	Clock Chasi;
	Chasi.Minutes();

	return 0;

}
