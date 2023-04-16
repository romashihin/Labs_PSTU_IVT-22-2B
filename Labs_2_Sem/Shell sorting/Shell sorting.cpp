#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Shell(int* mas, int count)
{
	for (int d = count / 2; d > 0; d /= 2)
	{
		for (int i = d; i < count; i++)
		{
			int tmp = mas[i];
			int j;
			for (j = i; j >= d && mas[j - d] > tmp; j -= d)
			{
				mas[j] = mas[j - d];
			}
			mas[j] = tmp;
		}
	}
}

int main()
{
	setlocale(0, "RUS");
	srand(time(NULL));
	int count;
	cout << "Введите количество элементов в массиве: ";
	cin >> count;
	cout << endl;

	cout << "Изначальный массив:" << endl;
	int mas[20];
	for (int i = 0; i < count; i++)
	{
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}
	cout << endl << endl;

	Shell(mas, count);

	cout << "Отсортированный массив:" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	return 0;
}
