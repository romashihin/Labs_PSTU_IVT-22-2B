#include <iostream>

using namespace std;

void DeleteElem(int*& mas, int& size, int ind)
{
	int* temp = new int[size - 1];
	int c = 0;
	for (int i = 0; i < ind; i++)
		temp[c++] = mas[i];
	for (int i = ind + 1; i < size; i++)
		temp[c++] = mas[i];
	delete[] mas;
	mas = temp;
	size -= 1;
}
void PrintAr(int* mas, int size)
{
	for (int i = 0; i < size; i++)
		cout << mas[i] << " ";
	cout << endl;
}

void AddElem(int*& mas, int& size, int ind, int elem)
{
	int c = 0;
	int* temp = new int[size + 1];
	for (int i = 0; i < ind; i++)
	{
		temp[c] = mas[i];
		++c;
	}
	++c;
	temp[ind] = elem;
	for (int i = ind + 1; i < size + 1; i++)
	{
		temp[c] = mas[i - 1];
		++c;
	}
	delete[] mas;
	mas = temp;
	size += 1;
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int n, z, p;
	do
	{
		cout << "Введите количество элементов (большее 1): ";
		cin >> n;
	} while (n < 2);
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100 - 50;
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Введите число, которое вы хотите найти: ";
	cin >> z;
	int i = 0, ind;
	bool f = false;
	while ((i < n) && !f)
	{
		if (a[i] == z)
		{
			f = true;
			ind = i;
		}
		++i;
	}
	cout << endl;
	if (f)
	{
		cout << "Элемент найден, его индекс = " << ind << endl;
		DeleteElem(a, n, ind);
		PrintAr(a, n);
		do
		{
			cout << "Введите индекс, на место котрого вы хотите добавить элемент: ";
			cin >> p;
		} while (p > n);
		AddElem(a, n, p, z);
		cout << endl;
		PrintAr(a, n);
	}
	else
		cout << "Число не найдено";
	cout << endl;
	delete[] a;
	system("pause");
	return 0;
}
