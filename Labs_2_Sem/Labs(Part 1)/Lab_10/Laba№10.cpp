#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <random>

using namespace std;

int main()
{
	srand(time(NULL));
	int rows = 5;
	int cols = 6;
	int count = rows;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		cout << i + 1 << ") ";
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	cout << "//////////////////////////////////////////////////////" << endl;

	for (int i = 0; i < rows; i++)
	{
		if (arr[i][0] != arr[i][5])
		{
			cout << i + 1 << ") ";
			for (int j = 0; j < cols; j++)
			{
				cout << arr[i][j];
			}
			cout << endl;
		}
	}

	for (int i = 0; i < count; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}
