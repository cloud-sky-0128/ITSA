#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int b, h;
    double area;

    cin >> b >> h;
    area = static_cast<double>(b * h) / 2;
    cout << "Triangle area:" << fixed << setprecision(1) << area << endl;

    return 0;
}
