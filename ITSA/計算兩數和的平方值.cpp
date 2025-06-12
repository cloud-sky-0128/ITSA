#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int X, Y;
        cin >> X >> Y;
        int square = (X + Y) * (X + Y);
        cout << square << endl;
    }

    return 0;
}
