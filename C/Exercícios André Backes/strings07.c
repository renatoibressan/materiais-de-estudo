#include <stdio.h>
#include <string.h>
#define N 10000

int main() {
    char str[N];
    int i, j, k, l = 0;
    scanf("%s", str);
    while (str[l] != '\0') l++;
    k = l - 1;
    j = l / 2;
    for (i = 0; i < j; i++) {
        if (str[i] != str[k]) {
            printf("NAO EH PALINDROMO\n");
            break;
        }
        k--;
    }
    if (i == j) printf("PALINDROMO\n");
    return 0;
}