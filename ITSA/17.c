#include <stdio.h>

int main() {
    int T, S;
    double salary;

    scanf("%d %d", &T, &S);

    if (T > 120) {
        salary = S * (60 + 60 * 1.33 + (T - 120) * 1.66);
    } else if (T > 60) {
        salary = S * (60 + (T - 60) * 1.33);
    } else {
        salary = S * T;
    }

    printf("%.1f\n", salary);
    return 0;
}
