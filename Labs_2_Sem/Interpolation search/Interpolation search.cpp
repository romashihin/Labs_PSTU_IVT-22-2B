#include<iostream>
#include<Windows.h>

using namespace std;

void Print(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

int InterpolSearch(int* mas, int size, int key){
	int mid;
	int left = 0;
	int right = size - 1;

	while ((mas[left] < key) && (key < mas[right])){
		mid = left + ((key - mas[left]) * (right - left) / (mas[right] - mas[left]));
		if (mas[mid] < key){
			left = mid + 1;
		}
		else{
			if (mas[mid] > key){
				right = mid - 1;
			}
			else{
				return mid;
			}
		}
	}
	if (mas[left] == key){
		return left;
	}
	else if (mas[right] == key){
		return right;
	}
	return -1;
}

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size = 0;
	do{
		cout << "Введите размерность массива: ";
		cin >> size;
	} while (size < 2);
	int* mas = new int[size];
	cout << "Элементы массива: " << endl;
	for (int i = 0; i < size; i++){
		cin >> mas[i];
	}
	cout << endl << "Массив: " << endl;
	Print(mas, size);
	for (int i = 0; i < size - 1; i++){
		int min = i;
		for (int j = i; j < size; j++){
			if (mas[j] < mas[min]){
				min = j;
			}
		}
		if (i != min){
			int tmp = mas[i];
			mas[i] = mas[min];
			mas[min] = tmp;
		}
	}
	cout << endl << "Отсортированный массив: " << endl;
	Print(mas, size);
	int index;
	int key;
	cout << endl << "Введите элемент, который необходимо удалить из массива: ";
	cin >> key;
	do {
		index = InterpolSearch(mas, size, key);
		if (index != -1) {
			for (int i = index; i < size - 1; i++) {
				mas[i] = mas[i + 1];
			}
			size--;
		}
	} while (index != -1);
	cout << endl << "Массив после удаления: " << endl;
	Print(mas, size);
	delete[] mas;
	return 0;
}
