#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdarg>

using namespace std;

bool is_triangle(int x, int y, int z) {
    vector<int> sides = { x, y, z };
    sort(sides.begin(), sides.end());
    return sides[0] + sides[1] > sides[2];
}

int triangle(int args, ...) {
    va_list ap;
    va_start(ap, args);
    int count = 0;
    for (int i = 0; i < args - 2; i++) {
        int a = va_arg(ap, int);
        int b = va_arg(ap, int);
        int c = va_arg(ap, int);
        if (is_triangle(a, b, c)) {
            count++;
        }
    }
    va_end(ap);
    return count;
}

int main() {
    int count1 = triangle(3, 1, 2, 3);
    int count2 = triangle(9, 1, 2, 3, 4, 5, 6, 7, 8, 9);
    int count3 = triangle(11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
    cout << "Number of triangles in set 1: " << count1 << endl;
    cout << "Number of triangles in set 2: " << count2 << endl;
    cout << "Number of triangles in set 3: " << count3 << endl;
    return 0;
}
