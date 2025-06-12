#include <iostream>
using namespace std;

int main() {
    int N, days, hours, minutes, seconds;

    cin >> N;

    days = N / 86400;
    N %= 86400;
    hours = N / 3600;
    N %= 3600;
    minutes = N / 60;
    seconds = N % 60;

    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;

    return 0;
}
