#include <stdio.h>
#include <string.h>
#define N 10000

void cesarsCode(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 65 && str[i] <= 87) || (str[i] >= 97 && str[i] <= 119)) str[i] += 3;
    }
}

int main() {
    char str[N];
    scanf("%s", str);
    cesarsCode(str);
    printf("%s\n", str);
    return 0;
}