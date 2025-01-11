#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    max = b > max ? b : max;
    max = c > max ? c : max;

    printf("%d\n", max);
    return 0;
}
