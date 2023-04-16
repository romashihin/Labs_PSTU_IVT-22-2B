#include <iostream>
#include <Windows.h>

using namespace std;

struct Advertising
{
	int num_of_adds;
	int num_of_percent;
	double earnings_for_one_add;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Advertising Income;
	cout << "Введите количество объявлений, показанных посетителям: ";
	cin >> Income.num_of_adds;
	cout << endl;

	cout << "Введите количество процентов посетителей, которые нажали на объявление: ";
	cin >> Income.num_of_percent;
	double interest_rate = Income.num_of_percent * 0.01;
	cout << "Процент, записанный в форме десятичной дроби: " << interest_rate << endl << endl;

	cout << "Введите средний заработок за каждое нажатие объявление: ";
	cin >> Income.earnings_for_one_add;
	cout << endl;

	cout << "Доход от показа рекламы на веб-сайте: " << Income.num_of_adds << " * " << interest_rate << " * " << Income.earnings_for_one_add << " = " << Income.num_of_adds * interest_rate * Income.earnings_for_one_add << endl;
	return 0;
}