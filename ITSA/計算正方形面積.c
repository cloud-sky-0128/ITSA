#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double w, area;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &w);
        area = round(w * w * 10) / 10.0;
        printf("%.1f\n", area);
    }

    return 0;
}
