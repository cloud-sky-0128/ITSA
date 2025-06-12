#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T, S;
    double salary;

    cin >> T >> S;

    if (T > 120) {
        salary = S * (60 + 60 * 1.33 + (T - 120) * 1.66);
    } else if (T > 60) {
        salary = S * (60 + (T - 60) * 1.33);
    } else {
        salary = S * T;
    }

    cout << fixed << setprecision(1) << salary << endl;
    return 0;
}
