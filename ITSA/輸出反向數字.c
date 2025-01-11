#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    for(int i = 0; i < 3; i++) {
        printf("%d,", number % 10);
        number = number / 10;
    }
    printf("%d\n", number);
    return 0;
}
