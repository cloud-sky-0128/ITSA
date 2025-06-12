#include <iostream>
using namespace std;

int main() {
    int n;
    int M;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> M;
        cout << M << " " << M * M << " " << M * M * M << endl;
    }

    return 0;
}
