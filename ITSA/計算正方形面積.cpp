#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    double w, area;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> w;
        area = round(w * w * 10) / 10.0;
        cout << fixed << setprecision(1) << area << endl;
    }

    return 0;
}
