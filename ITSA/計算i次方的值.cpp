#include <iostream>
using namespace std;

int main() {
    int n, i;

    cin >> n;
    for (int num = 0; num < n; num++) {
        int result = 1;
        cin >> i;
        if (i > 31)
            cout << "Value of more than 31" << endl;
        else {
            result = result << i;
            cout << result << endl;
        }
    }

    return 0;
}
