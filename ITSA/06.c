#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int square = (X + Y) * (X + Y);
        printf("%d\n", square);
    }

    return 0;
}
