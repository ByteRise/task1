#include <iostream>
using namespace std;

void draw_triangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << ' ';
        }
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Введите высоту треугольника: ";
    cin >> n;
    draw_triangle(n);
    return 0;
}
