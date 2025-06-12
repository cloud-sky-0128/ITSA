#include <iostream>
using namespace std;

int main() {
    char letter;
    cin >> letter;

    if (letter == 'a' || letter == 'A' ||
        letter == 'e' || letter == 'E' ||
        letter == 'i' || letter == 'I' ||
        letter == 'o' || letter == 'O' ||
        letter == 'u' || letter == 'U') 
        cout << "母音" << endl;
    else 
        cout << "子音" << endl;

    return 0;
}
