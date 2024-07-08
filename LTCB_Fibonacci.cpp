#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        cout << b << " + " << a << " = " << c << "\n";
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    fib(n);

    return 0;
}