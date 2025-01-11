#include <stdio.h>

int main() {
    int M, N, temp;
    scanf("%d %d", &M, &N);
    while(N != 0){
        temp = N;
        N = M % N;
        M = temp;
    }
    printf("%d", M);
}
