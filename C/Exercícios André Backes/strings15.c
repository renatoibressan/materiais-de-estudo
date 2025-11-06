#include <stdio.h>
#include <string.h>
#define N 10000

void ordenaStrings(char str[][N], int n) {
    char swap[N];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(swap, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], swap);
            }
        }
    }
}

int main() {
    char nomes[2][N];
    for (int i = 0; i < 2; i++) {
        scanf("%s", nomes[i]);
    }
    ordenaStrings(nomes, 2);
    for (int i = 0; i < 2; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;
}