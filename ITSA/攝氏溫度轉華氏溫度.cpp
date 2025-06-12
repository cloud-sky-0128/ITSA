#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double c, f;
    cin >> c;
    f = round(c * 9 / 5 * 10 + 320) / 10.0;
    cout << fixed << setprecision(1) << f << endl;
    
    return 0;
}
