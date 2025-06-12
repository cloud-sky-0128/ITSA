#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int NT10 = N / 10;
    int NT5  = (N % 10) / 5;
    int NT1  = (N % 10) % 5;

    cout << "NT10=" << NT10 << endl;
    cout << "NT5=" << NT5 << endl;
    cout << "NT1=" << NT1 << endl;

    return 0;
}
