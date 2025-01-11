#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);
    for (int num = 0; num < n; num++) {
        int result = 1;
        scanf("%d", &i);
        if (i > 31)
            printf("Value of more than 31\n");
        else {
            result = result << i;
            printf("%d\n", result);
        }
    }

    return 0;
}
