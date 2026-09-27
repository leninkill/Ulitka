#include <iostream>

using namespace std;

int main() {
    int h, a, b;
    cin >> h; // 10
    cin >> a; // 3
    cin >> b; // 2

    int days = (h - a + a - b - 1) / (a - b) + 1;

    cout << days;

    return 0;
}