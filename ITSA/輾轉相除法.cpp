#include <iostream>
using namespace std;

int main() {
    int M, N, temp;
    cin >> M >> N;

    while (N != 0) {
        temp = N;
        N = M % N;
        M = temp;
    }

    cout << M << endl;
    return 0;
}
