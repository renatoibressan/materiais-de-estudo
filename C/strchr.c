#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaração da função que vai encontrar um caractere qualquer em um texto maior
char *str_chr(const char *str, int ch);

// Declaração da função que contará quantas vezes um caractere qualquer aparece em um texto maior
void conta_ocorrencias(const char *str, char ch, int *occurrences);

int main() {
    // Declaração das variáveis char
    char str[130], ch;
    // Declaração de uma variável int
    int count;
    // Leitura do texto e do caractere a ser analisado
    scanf("%[^\n]%*c %c", str, &ch);
    // Verifica se a função "str_chr" retornou NULL ou não
    if (str_chr(str, ch) == NULL) {
        // Exibição de resposta em caso de ch não encontrado em str
        printf("'%c' nao pertence a '%s', portanto, nao foi possivel contar as ocorrencias.\n", ch, str);
    } else {
        // Conta as ocorrências de ch em str
        conta_ocorrencias(str, ch, &count);
        // Exibição de resposta em caso de ch encontrado em str
        printf("'%c' aparece %d vez(es) em '%s'.\n", ch, count, str);
    }
    // Finalização da main
    return 0;
}

char *str_chr(const char *str, int ch) {
    // Loop que se repete ENQUANTO o caractere examinado de str não for o caractere nulo
    while (*str != '\0') {
        // Se uma parte de str for igual a ch, finaliza a função
        if (*str == ch) return (char *)str;
        // Percorre caractere a caractere de str para realizar a verificação
        str++;
    }
    // Se ch for o caractere nulo, finaliza a função
    if (ch == '\0') return (char *)str;
    // Retorno de NULL caso o caractere não seja encontrado
    return NULL;
}

void conta_ocorrencias(const char *str, char ch, int *occurrences) {
    // Variável de contagem inicializada em 0
    int count = 0;
    // Variável ponteiro para char constante que recebe o valor de str
    const char *ptr = str;
    // Loop que se repete ENQUANTO "str_chr" de ptr com ch não for NULL 
    while ((ptr = str_chr(ptr, ch)) != NULL) {
        // Incrementa em 1 unidade o valor de count a cada caractere ch encontrado em ptr (str)
        count++;
        // Percorre caractere a caractere de ptr
        ptr++;
    }
    // A variável ponteiro para int occurrences recebe o valor final de count, exercendo um "retorno" na função, que é void
    *occurrences = count;
    // Finalização da função
    return;
}