#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int>& arr, int left, int right) 
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    while (i <= j) 
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) 
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main()
{
    vector<int> arr = { 5, 2, 9, 3, 7, 1, 8, 6, 4 };
    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
     