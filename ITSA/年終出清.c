#include <stdio.h>

int main() {
    int P;
    scanf("%d", &P);
    if (P >= 100) {
        printf("%d\n", P * 100 * 7 / 10);
    } else if (P >= 30) {
        printf("%d\n", P * 100 * 8 / 10);
    } else if (P >= 10) {
        printf("%d\n", P * 100 * 9 / 10);
    } else {
        printf("%d\n", P * 100);
    }
    return 0;
}
