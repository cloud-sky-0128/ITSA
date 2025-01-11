#include <stdio.h>

int main() {
    int N, isPrime = 1;
    scanf("%d", &N);

    if (N < 2) 
        printf("NO\n");
    else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime)
            printf("YES\n");
        else
            printf("NO\n"); 
    }

    return 0;
}
