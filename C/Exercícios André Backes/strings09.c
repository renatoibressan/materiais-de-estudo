#include <stdio.h>
#include <string.h>
#define N 10000

void contaOcorrencias(const char *str, const char *substr, int *count) {
    int contador = 0;
    const char *ptr = str;
    while ((ptr = strstr(ptr, substr)) != NULL) {
        contador++;
        ptr += strlen(substr);
    }
    *count = contador;
}

int main() {
    char str[N], obj[N];
    int count;
    scanf("%[^\n]%*c %s", str, obj);
    contaOcorrencias(str, obj, &count);
    if (count > 0) printf("'%s' aparece %d vez(es) em '%s'\n", obj, count, str);
    else printf("'%s' nao aparece em '%s'\n", obj, str);
    return 0;
}