#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    for (int i = 10000; i > 0; i /= 10) {
        for (int j = 0; j < number / i; j++) {
            printf("*");
        }
        printf("\n");
        number = number % i;
    }
    return 0;
}
