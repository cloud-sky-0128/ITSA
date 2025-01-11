#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    for (int i = 1000; i > 0; i /= 10) {
        printf("%d\n", number / i);
        for (int j = 0; j < number; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
