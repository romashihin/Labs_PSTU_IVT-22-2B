#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Hoare(int* mas, int left, int right)
{
	int temp, add;
	int left1 = left;
	int right1 = right;
	temp = mas[(left1 + right1) / 2];
	do
	{
		while (mas[left1] < temp)
		{
			left1++;
		}
		while (mas[right1] > temp)
		{
			right1--;
		}
		if (left1 <= right1)
		{
			add = mas[left1];
			mas[left1] = mas[right1];
			mas[right1] = add;
			left1++;
			right1--;
		}
	} while (left1 < right1);

	if (left < right1)
	{
		Hoare(mas, left, right1);
	}
	if (left1 < right)
	{
		Hoare(mas, left1, right);
	}
}

int main()
{
	setlocale(0, "RUS");
	srand(time(NULL));

	int mas[20];
	int count;
	cout << "Введите количество элементов массива: ";
	cin >> count;
	cout << endl;
	cout << "Изначальный массив: " << endl;
	for (int i = 0; i < count; i++)
	{
		mas[i] = rand() % 100;
		cout << mas[i] << " ";
	}
	cout << endl << endl;

	Hoare(mas, 0, count);

	cout << "Отсортированный массив: " << endl;
	for (int i = 1; i < count + 1; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}
