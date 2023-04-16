#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> compute_failure_function(string pattern) {
    int n = pattern.size();
    vector<int> failure_function(n, 0);
    int j = 0;
    for (int i = 1; i < n; i++) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = failure_function[j - 1];
        }
        if (pattern[i] == pattern[j]) {
            j++;
        }
        failure_function[i] = j;
    }
    return failure_function;
}
void knuth_morris_search(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();
    vector<int> failure_function = compute_failure_function(pattern);
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (j > 0 && text[i] != pattern[j]) {
            j = failure_function[j - 1];
        }
        if (text[i] == pattern[j]) {
            j++;
        }
        if (j == m) {
            cout << "Pattern found at index " << i - m + 1 << endl;
            j = failure_function[j - 1];
        }
    }
}
int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    knuth_morris_search(text, pattern);
    return 0;
}
