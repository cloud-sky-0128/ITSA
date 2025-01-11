#include <stdio.h>
#include <math.h> 

int main()
{
    int min;

    scanf("%d", &min);

    if (min <= 800)
        printf("%.1f\n", round(min * 0.9 * 10) / 10.0);
    else if (min <= 1500)
        printf("%.1f\n", round(min * 0.81 * 10) / 10.0);
    else
        printf("%.1f\n", round(min * 0.711 * 10) / 10.0);

    return 0;
}
