#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Cac phan tu cua day Fibonacci tu 0 den " << n << " la: ";

    while (a <= n) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
