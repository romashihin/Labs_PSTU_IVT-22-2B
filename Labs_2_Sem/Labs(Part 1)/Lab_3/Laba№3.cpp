#include <iostream>

using namespace std;

double fact(int n)
{
	int factor = 1;
	for (int i = 1; i < n + 1; i++)
	{
		factor *= i;
	}
	return factor;
}

double func(double x, int n)
{
	double res;
	if (n == 1)
	{
		return 1;
	}
	res = ((n * n + 1 / fact(n)) * pow((x * 0.5), n));
	return (res + func(x, n - 1));
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	int n;
	cout << "Введите x и n" << endl;
	cin >> x >> n;
	cout << "Сумма последовательности равна " << func(x, n) << endl;
}