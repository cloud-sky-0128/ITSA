#include <stdio.h>

int main() {
    int type;
    scanf("%d", &type);
    if (type == 1) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5 - i - 1; j++) printf(" ");
            for (int j = 0; j < 2 * i + 1; j++) {
                if (j == 0 || j == 2 * i || i == 4) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
    } else if (type == 2) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5 - i - 1; j++) printf(" ");
            for (int j = 0; j < 2 * i + 1; j++) printf("*");
            printf("\n");
        }
    } else if (type == 3) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < i; j++) printf(" ");
            for (int j = 0; j < 9 - 2 * i; j++) printf("*");
            printf("\n");
        }
    }
    return 0;
}
