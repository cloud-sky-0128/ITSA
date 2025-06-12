#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 1000; i > 0; i /= 10) {
        cout << number / i << endl;
        for (int j = 0; j < number; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
