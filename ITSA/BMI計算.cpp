#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double w, h, BMI;
    cin >> w >> h;
    h = h / 100.0;
    BMI = w / (h * h);
    cout << fixed << setprecision(2) << BMI << endl;

    return 0;
}
