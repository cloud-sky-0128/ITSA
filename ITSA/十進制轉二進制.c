#include <stdio.h>

int main() {
    int N;
    int binary[8] = {0};

    scanf("%d", &N);

    if (N < 0) N += 256;
    
    for (int i = 7; i >= 0; i--) {
        binary[i] = N % 2;
        N /= 2;
    }

    for (int i = 0; i < 8; i++) printf("%d", binary[i]);
    
    printf("\n");

    return 0;
}
