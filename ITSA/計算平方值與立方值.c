#include <stdio.h>

int main()
{
    int n;
    int M;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &M);
        
        printf("%d %d %d\n", M, M * M, M * M * M);
    }

    return 0;
}
