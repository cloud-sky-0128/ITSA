#include <iostream>
using namespace std;

int main() {
    int N;
    bool isPrime = true;

    cin >> N;

    if (N < 2)
        cout << "NO" << endl;
    else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
