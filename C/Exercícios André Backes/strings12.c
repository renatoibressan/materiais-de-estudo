#include <stdio.h>
#include <string.h>
#define N 10000

int main() {
    char str[N];
    double price, final, desconto;
    scanf("%s %lf", str, &price);
    final = price * 0.9;
    desconto = price - final;
    printf("Produto: %s\nValor total: %.2lf\nValor do desconto: %.2lf\nValor a ser pago: %.2lf\n", str, price, desconto, final);
    return 0;
}