#include <iostream>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols];
    unordered_map<int, int> freq;
    int min_val = INT_MAX;
    srand(time(NULL));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 41 - 20;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (freq.count(arr[i][j])) {
                freq[arr[i][j]]++;
            }
            else {
                freq[arr[i][j]] = 1;
            }
        }
    }
    for (auto& it : freq) {
        if (it.second == 1 && it.first < min_val) {
            min_val = it.first;
        }
    }
    cout << "The minimum non-repeating element in the array is " << min_val << endl;
    return 0;
}
