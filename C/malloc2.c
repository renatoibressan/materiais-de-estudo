#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, c, **m, i, j;
    scanf("%d %d", &l, &c);
    m = (int **)malloc(sizeof(int*)*l);
    if (m == NULL) return 0;
    for (i = 0; i < l; i++) {
        m[i] = (int *)malloc(sizeof(int)*c);
        if (m[i] == NULL) return 0;
        for (j = 0; j < c; j++) {
            scanf("%d", (*(m + i) + j));
        }
    }
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (j == 0) printf("[");
            if (j > 0) printf(", ");
            printf("%d", *(*(m + i) + j));
            if (j == c - 1) printf("]\n");
        }
    }
    free(m);
    return 0;
}