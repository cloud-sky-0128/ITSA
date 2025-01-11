#include <stdio.h>

int main() {
    char letter;
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'A' ||
        letter == 'e' || letter == 'E' ||
        letter == 'i' || letter == 'I' ||
        letter == 'o' || letter == 'O' ||
        letter == 'u' || letter == 'U') 
        printf("母音\n");
    else 
        printf("子音\n");

    return 0;
}