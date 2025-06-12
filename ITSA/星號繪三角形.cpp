#include <iostream>
using namespace std;

int main() {
    int type;
    cin >> type;

    if (type == 1) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5 - i - 1; j++) cout << " ";
            for (int j = 0; j < 2 * i + 1; j++) {
                if (j == 0 || j == 2 * i || i == 4) cout << "*";
                else cout << " ";
            }
            cout << endl;
        }
    } else if (type == 2) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5 - i - 1; j++) cout << " ";
            for (int j = 0; j < 2 * i + 1; j++) cout << "*";
            cout << endl;
        }
    } else if (type == 3) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < i; j++) cout << " ";
            for (int j = 0; j < 9 - 2 * i; j++) cout << "*";
            cout << endl;
        }
    }

    return 0;
}
