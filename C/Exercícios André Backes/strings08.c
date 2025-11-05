#include <stdio.h>
#include <string.h>
#define N 10000

int main() {
    char str[N], obj[N];
    scanf("%[^\n]%*c %s", str, obj);
    if (strstr(str, obj) != NULL) printf("'%s' pertence a '%s'\n", obj, str);
    else printf("'%s' nao pertence a '%s'\n", obj, str);
    return 0;
}