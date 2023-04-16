#include <iostream>
using namespace std;

int colvo(int arr[], int size)     //для чисел
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}
	return count;
}
int colvo(string str)                     //для слов начинающихся на букву а
{
	int countA = 0;
	for (int i = 0; i < str.length(); i++) 
	{
		if (str[i] == ' ' and (str[i + 1] == 'a' or str[i + 1] == 'A'))
		{
			countA++;
		}
	}
	return countA;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
	string str = " Are you studying programming? A great future awaits you";
	int size = sizeof(arr) / sizeof(arr[0]);
	int countEven = colvo(arr, size);
	cout << "Even count is " << countEven << endl;
	int countA = colvo(str);
	cout << "Count of 'a' is " << countA;
}