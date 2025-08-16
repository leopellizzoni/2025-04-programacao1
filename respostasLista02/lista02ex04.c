#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usuário que digite um número inteiro
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero);

    // Verificar se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O numero digitado e par.\n");
    } else {
        printf("O numero digitado e impar.\n");
    }

    return 0;
}
