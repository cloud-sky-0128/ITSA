#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, t;
    cin >> m;

    m = m * 100;
    t = ceil(m / 23.8);

    cout << t << endl;

    return 0;
}
