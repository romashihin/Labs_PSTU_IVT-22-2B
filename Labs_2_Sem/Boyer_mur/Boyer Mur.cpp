#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char array[332] = { 'L','e','t',' ','m','e',' ','i','n','t','r','o','d','u','c','e',' ','m','y','s','e','l','f','.',' ','M','y',' ','n','a','m','e',' ','i','s',' ','M','a','r','i','y','a',' ','I',' ','a','m',' ','a',' ','2','0','-','y','e','a','r','-','o','l','d',' ','s','t','u','d','e','n','t',' ','f','r','o','m',' ','D','o','n','e','t','s','k','.',' ','I',' ','s','t','u','d','y',' ','a','t',' ','t','h','e',' ','u','n','i','v','e','r','s','i','t','y',' ','i','n',' ','m','y',' ','n','a','t','i','v','e',' ','t','o','w','n',' ','a','n','d',' ','m','y',' ','f','u','t','u','r','e',' ','p','r','o','f','e','s','s','i','o','n',' ','i','s',' ','b','o','o','k','k','e','e','p','i','n','g','.',' ','I',' ','l','i','v','e',' ','w','i','t','h',' ','m','y',' ','p','a','r','e','n','t','s',' ','a','n','d',' ','m','y',' ','e','l','d','e','r',' ','s','i','s','t','e','r',' ','L','e','n','a','.',' ','W','e',' ','a','r','e',' ','a',' ','f','r','i','e','n','d','l','y',' ','f','a','m','i','l','y','.',' ','L','e','n','a',' ','i','s',' ','2',' ','y','e','a','r','s',' ','o','l','d','e','r',' ','t','h','a','n',' ','m','e','.',' ','W','e',' ','s','h','a','r','e',' ','o','u','r',' ','r','o','o','m',' ','a','n','d',' ','t','e','l','l',' ','a','l','l',' ','o','u','r',' ','s','e','c','r','e','t','s',' ','t','o',' ','e','a','c','h',' ','o','t','h','e','r','.' };
	int counter = 3;
	//search "Lena"   a = 4     n = 1     e = 2     L = 3
	int sum = 0;
	bool flag = true;
	char l = 'L';
	char e = 'e';
	char n = 'n';
	char a = 'a';
	cout << "Our string: " << endl;
	for (int i = 0; i < 332; i++)
	{
		cout << array[i];
	}
	cout << endl << endl;
	while (flag)
	{
		if (array[counter] == a)
		{
			if (array[counter - 1] == n)
			{
				if (array[counter - 2] == e)
				{
					if (array[counter - 3] == l)
					{
						cout << "Substring 'Lena' is found";
						flag = false;
						break;
					}
					else
					{
						if (array[counter] != n and array[counter] != e and array[counter] != l)
						{
							counter += 4;
						}
						else if (array[counter] != n)
						{
							counter += 1;
						}
						else if (array[counter] != e)
						{
							counter += 2;
						}
						else if (array[counter] != l)
						{
							counter += 3;
						}
					}
				}
				else
				{
					if (array[counter] != n and array[counter] != e and array[counter] != l)
					{
						counter += 4;
					}
					else if (array[counter] != n)
					{
						counter += 1;
					}
					else if (array[counter] != e)
					{
						counter += 2;
					}
					else if (array[counter] != l)
					{
						counter += 3;
					}
				}
			}
			else
			{
				if (array[counter] != n and array[counter] != e and array[counter] != l)
				{
					counter += 4;
				}
				else if (array[counter] != n)
				{
					counter += 1;
				}
				else if (array[counter] != e)
				{
					counter += 2;
				}
				else if (array[counter] != l)
				{
					counter += 3;
				}
			}
		}
		else
		{
			if (array[counter] != n and array[counter] != e and array[counter] != l)
			{
				counter += 4;
			}
			else if (array[counter] != n)
			{
				counter += 1;
			}
			else if (array[counter] != e)
			{
				counter += 2;
			}
			else if (array[counter] != l)
			{
				counter += 3;
			}
		}
	}
	if (flag = false)
	{
		cout << "Substring 'Lena' is not found";
	}
	cout << endl;
	return 0;
}
