#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max = a;
    max = b > max ? b : max;
    max = c > max ? c : max;

    cout << max << endl;
    return 0;
}
