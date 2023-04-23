#include <iostream>
using namespace std;

int main() {
	const int n = 15;
	int m[n] = { 45, 96, -10, 73, 43, 4, 64, -1, 12, 90, 15, 88, 23, 45, -10};
	int max = m[0];
	int min = m[0];
	for (int i = 0; i < n; i++) {
		if (m[i] > max) {
			max = m[i];
		}
		else if (m[i] < min) {
			min = m[i];
		}
	}
	int l = max - min + 1;
	int* a = new int[l] {};
	for (int i = 0; i < n; i++) {
		a[m[i] - min] += 1;
	}
	int k = 0;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < a[i]; j++) {
			m[k] = i + min;
			k++;
		}
	}
	delete[] a;
	for (int i = 0; i < n; i++) {
		cout << m[i] << ' ';
	}
	return 0;
}
