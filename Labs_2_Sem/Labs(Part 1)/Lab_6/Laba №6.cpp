#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int a = 0;
	char stroka[256];
	gets_s(stroka);
	
	for (int i = 0; i < strlen(stroka); i++)
	{
		if (stroka[i] == 'H' and stroka[i + 1] == 'e' and stroka[i + 2] == 'l' and stroka[i + 3] == 'l' and stroka[i + 4] == 'o')
		{
			a += 1;
		}
	}
	for (int i = 0; i < a; i++)
	{
		cout << "Hello ";
	}
}