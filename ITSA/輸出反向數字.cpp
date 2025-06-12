#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 0; i < 3; i++) {
        cout << number % 10 << ",";
        number /= 10;
    }
    cout << number << endl;

    return 0;
}
