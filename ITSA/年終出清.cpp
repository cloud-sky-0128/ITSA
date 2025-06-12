#include <iostream>
using namespace std;

int main() {
    int P;
    cin >> P;

    if (P >= 100) {
        cout << P * 100 * 7 / 10 << endl;
    } else if (P >= 30) {
        cout << P * 100 * 8 / 10 << endl;
    } else if (P >= 10) {
        cout << P * 100 * 9 / 10 << endl;
    } else {
        cout << P * 100 << endl;
    }

    return 0;
}
