#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int mi;
    double km;
    cin >> mi;
    km = static_cast<double>(mi) * 1.6;
    cout << "km=" << fixed << setprecision(1) << km << endl;

    return 0;
}
