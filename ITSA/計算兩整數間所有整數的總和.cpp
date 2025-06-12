#include <iostream>
using namespace std;

int main() {
    int n, X, Y, sum;

    cin >> n;
    for (int num = 0; num < n; num++) {
        sum = 0;
        cin >> X >> Y;

        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        for (int i = X; i <= Y; i++) {
            sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}
