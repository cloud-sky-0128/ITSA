#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0)
        cout << "0" << endl;
    else if (N < 0)
        cout << "負數" << endl;
    else
        cout << "正數" << endl;

    return 0;
}
