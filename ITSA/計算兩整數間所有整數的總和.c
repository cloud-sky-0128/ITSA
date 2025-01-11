#include <stdio.h>

int main() {
    int n, X, Y, sum;

    scanf("%d", &n);
    for(int num = 0; num < n; num++) {
        sum = 0;
        scanf("%d %d", &X, &Y);
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }
        for (int i = X; i <= Y; i++) {
            sum += i;
        }
        printf("%d\n", sum);
    }

    return 0;
}
