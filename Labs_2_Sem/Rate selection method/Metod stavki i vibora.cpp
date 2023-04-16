#include <iostream>
#include <random>
#include <ctime>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main() 
{
    srand(time(NULL));
    int arr[100];
    cout << "Start array: " << endl;
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 41 - 20; 
        cout << arr[i] << " ";
    }
    cout << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
