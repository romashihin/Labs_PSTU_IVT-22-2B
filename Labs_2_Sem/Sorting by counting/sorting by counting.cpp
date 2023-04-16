#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int mask[3] = { 1, 2, 3 };
	int arr[300];
	for (int i = 0; i < 300; i++)
	{
		arr[i] = rand() % 10;
	}
	cout << "Массив: " << endl;
	for (int i = 0; i < 300; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Искомая маска:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << mask[i] << " ";
	}
	cout << endl;
	bool res = false;
	int stroka = 0;
	for (int i = 0; i < 293; i++)
	{
		if (arr[i + 2] == mask[2] and arr[i + 1] == mask[1] and arr[i] == mask[0])
		{
			res = true;
			stroka = i + 1;
		}
	}
	if (res)
	{
		cout << "Искомая маска ";
		for (int i = 0; i < 3; i++)
		{
			cout << mask[i] << " ";
		}
		cout << "найдена" << endl;
		cout << "Маска начинается с элемента под номером " << stroka << endl;
	}
	else
	{
		cout << "Искомая маска не найдена" << endl;
	}
	return 0;
}