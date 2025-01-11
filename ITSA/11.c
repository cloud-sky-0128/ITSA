#include <stdio.h>
#include <math.h>

int main()
{
    double c, f;
    scanf("%lf", &c);
    f = round(c * 9 / 5  * 10 + 320) / 10.0;
    printf("%.1f\n", f);
	
	return 0;
}
