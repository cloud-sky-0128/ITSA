#include <stdio.h>
#include <math.h>

int main()
{
    int m, t;
    scanf("%d", &m);

    m = m * 100;
    t = ceil(m / 23.8) ;
    
    printf("%d\n", t);

    return 0;
}
