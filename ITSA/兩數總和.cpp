#include <iostream>
using namespace std;

int main() {
    int n;
    int num1, num2, sum;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num1 >> num2;
        sum = num1 + num2;
        cout << sum << endl;
    }

    return 0;
}
