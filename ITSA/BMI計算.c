#include <stdio.h>

int main()
{
    double w, h, BMI;
    scanf("%lf %lf", &w, &h);
    h = h / 100.00;
    BMI = w / (h * h);
    printf("%.2f\n", BMI);
	
    return 0;
}
