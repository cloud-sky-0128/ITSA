#include <stdio.h>

int main()
{
    int t, b, h;
    double area;
    scanf("%d %d %d", &t, &b, &h);
    area = (double)(t + b) * h / 2;
    printf("Trapezoid area:%.1f\n", area);
	
	return 0;
}
