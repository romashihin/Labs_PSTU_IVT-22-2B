#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;
struct State
{
	string name;       //название государства
	string language;  //язык
	string currency; //валюта
	int rate;       //курс относительно доллара
};

State states[1000];
int numState = 0;


void writeResultToFile() {
	ofstream outFile("States.txt");
	for (int i = 0; i < numState; i++) {
		outFile << states[i].name << " " << states[i].language << " " << states[i].currency << " " << states[i].rate << endl;
	}
	outFile.close(); 
	
}

void replaceFile(){	
	ifstream inFile("states.txt");
	ofstream outFile("new_states.txt");
	while (!inFile.eof()) {
		State t;
		inFile >> t.name >> t.language >> t.currency >> t.rate;
		if (t.name != "USA") {
			outFile << t.name << " " << t.language << " " << t.currency << " " << t.rate << endl;
		}
	}
	inFile.close();
	outFile.close();
	remove("states.txt");
	rename("new_states.txt", "states.txt");
}
void addNewState() {
	int amount;
	cout << "Enter amount of states: ";
	cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		State t;
		cout << "Enter name of state: ";
		cin >> t.name;
		cout << "Enter language of state: ";
		cin >> t.language;
		cout << "Enter the name of the currency: ";
		cin >> t.currency;
		cout << "Enter the exchange rate of the national currency against the dollar: ";
		cin >> t.rate;
		states[numState++] = t;
	}
	writeResultToFile();
}
void enterStateData() {
	cout << "Enter amount of teams: ";
	cin >> numState;
	for (int i = 0; i < numState; i++) {
		cout << "Enter name of team: ";
		cin >> states[i].name;
		cout << "Enter language of state: ";
		cin >> states[i].language;
		cout << "Enter the name of the currency: ";
		cin >> states[i].currency;
		cout << "Enter the exchange rate of the national currency against the dollar";
		cin >> states[i].rate;
	}
	writeResultToFile();
}



/* 
* чтение данных из файла

ofstream fout;
fout.open(path,ofstream::app);

if (!fout.is_open())
{
	cout << "Ошибка открытия файла!" << endl;

}
else
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите число: " << endl;
		int a;
		cin >> a;
		fout << a;
	}
}
fout.close();
*/  
/* setlocale(LC_ALL, "Russian");
	
	string path = "myFile.txt";

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		string str;

		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			cout << str << endl;
		}
	}


	fin.close();
*/
int main(){
	cout << "Initial amount of teams: " << numState << endl;
	addNewState();
	cout << "Updated amount of teams: " << numState << endl;
	writeResultToFile();
	replaceFile();
	return 0;
}	
