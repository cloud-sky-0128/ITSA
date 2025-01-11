#include <stdio.h>

int main()
{
	int b, h;
    double area;
    scanf("%d %d", &b, &h);
    area = (double)(b * h) / 2;
    printf("Triangle area:%.1f\n", area);
	
	return 0;
}
