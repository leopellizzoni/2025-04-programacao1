#include <stdio.h>

int main() {
    int numero, numeroInvertido = 0, numeroOriginal;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    numeroOriginal = numero;

    while (numero > 0) {
        numeroInvertido = numeroInvertido * 10 + numero % 10;
        numero = numero / 10;
    }

    if (numeroOriginal == numeroInvertido) {
        printf("O numero informado e palindromo.\n");
    } else {
        printf("O numero informado nao e palindromo.\n");
    }

    return 0;
}