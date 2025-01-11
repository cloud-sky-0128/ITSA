#include <stdio.h>

int main() {
    int N, days, hours, minutes, seconds;

    scanf("%d", &N);

    days = N / 86400;
    N %= 86400;
    hours = N / 3600;
    N %= 3600;
    minutes = N / 60;
    seconds = N % 60;

    printf("%d days\n", days);
    printf("%d hours\n", hours);
    printf("%d minutes\n", minutes);
    printf("%d seconds\n", seconds);

    return 0;
}
