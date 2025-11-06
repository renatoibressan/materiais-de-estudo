#include <stdio.h>
#include <string.h>
#define N 10000

int main() {
    char str[N];
    int i, j;
    scanf("%[^\n] %d%d", str, &i, &j);
    if (i < 0 || j < 0 || i >= j) return 0;
    for (int k = i; k <= j; k++) {
        printf("%c", str[k]);
    }
    printf("\n");
    return 0;
}