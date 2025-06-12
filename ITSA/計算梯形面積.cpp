#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t, b, h;
    double area;
    cin >> t >> b >> h;
    area = static_cast<double>(t + b) * h / 2;
    cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl;

    return 0;
}
