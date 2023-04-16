#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void BubbleSorting(int* mas, int count)
{
	for (int k = 0; k < count; k++)
	{
		for (int i = 0; i < count - 1 - k; i++)
		{
			if (mas[i] > mas[i + 1])
			{
				swap(mas[i], mas[i + 1]);
			}
		}
	}
};

int main()
{
	srand(time(NULL));
	const int count = 10;
	int mas[count];
	for (int i = 0; i < count; i++)
	{
		mas[i] = rand() % 33;
		cout << mas[i] << " ";
	}
	cout << endl;
	BubbleSorting(mas, count);
	for (int i = 0; i < count; i++)
	{
		cout << mas[i] << " ";
	}
	return 0;
}
