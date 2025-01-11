#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N, largest;

    scanf("%d", &N);

    for (int i = N - 1; i > 1; i--) {
        if (isPrime(i)) {
            largest = i;
            break;
        }
    }

    printf("%d\n", largest);

    return 0;
}
