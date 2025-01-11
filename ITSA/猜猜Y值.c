#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x >= 50 && x <= 70) {
            printf("%d\n", x);
        } else {
            printf("100\n");
        }
    }
    return 0;
}
