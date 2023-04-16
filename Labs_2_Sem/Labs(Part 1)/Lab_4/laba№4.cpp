#include <iostream>
#include <math.h>			

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[15]{
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14
	};
	int n = 15;
	int k;
	cin >> k;
	cout << "Массив от k до k - 1 (по кольцу влево):" << endl;
	for (int i = k + n; i > k; i--) //остаток от деления
	{
		cout << array[i % n] << endl;
	}
	cout << "------------------------------" << endl;

	for (int i = k; i < k + n; i++)
	{
		if (i % 5 == 0)
		{
			cout << array[i % n] << endl << "0" << endl;
		}
		else
		{
			cout << array[i % n] << endl;
		}
	}
}