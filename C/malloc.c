#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *p;
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) printf("[");
        if (i > 0) printf(", ");
        printf("%d", *(p + i));
        if (i == n - 1) printf("]\n");
    }
    free(p);
    return 0;
}