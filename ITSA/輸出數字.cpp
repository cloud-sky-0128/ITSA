#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 10000; i > 0; i /= 10) {
        for (int j = 0; j < number / i; j++) {
            cout << "*";
        }
        cout << endl;
        number = number % i;
    }

    return 0;
}
