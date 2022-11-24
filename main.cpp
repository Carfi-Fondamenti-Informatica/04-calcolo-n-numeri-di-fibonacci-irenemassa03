#include <iostream>
using namespace std;
int main() {
    int n, i, a, b, c;
    cin >> n;
    a = 1;
    b = 1;
    if (n >= 2) {
        cout << a << endl;
        cout << b << endl;
        for (i = 0; i + 2 < n; i++) {
            c = a + b;
            cout << c << endl;
            a = b;
            b = c;
        }
    } else {
        cout << "errore" << endl;

    }
}

