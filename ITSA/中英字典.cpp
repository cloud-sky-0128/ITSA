#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> english = {"dog", "cat", "duck", "cow", "fox"};
    vector<string> chinese = {"狗", "貓", "鴨", "牛", "狐"};
    int size = 5;

    string input;
    cin >> input;

    for (int i = 0; i < size; i++) {
        if (input == english[i]) {
            cout << chinese[i] << endl;
            return 0;
        }
    }

    for (int i = 0; i < size; i++) {
        if (input == chinese[i]) {
            cout << english[i] << endl;
            return 0;
        }
    }

    return 0;
}
