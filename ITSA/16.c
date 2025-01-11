#include <stdio.h>

int main() {
    
    int h1, m1, h2, m2, total_minutes, fee = 0;

    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);

    total_minutes = (h2 * 60 + m2) - (h1 * 60 + m1);

    if (total_minutes > 240) {
        fee += (total_minutes - 240 + 29) / 30 * 60;
        total_minutes = 240;
    }
    if (total_minutes > 120) {
        fee += (total_minutes - 120 + 29) / 30 * 40;
        total_minutes = 120;
    }
    fee += (total_minutes + 29) / 30 * 30;

    printf("%d\n", fee);
    return 0;
}
