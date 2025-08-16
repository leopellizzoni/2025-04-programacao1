#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usuário que digite um número inteiro
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero);

    // Verificar se o número é positivo ou negativo
    if (numero >= 0) {
        printf("O numero digitado e positivo.\n");
    } else {
        printf("O numero digitado e negativo.\n");
    }

    return 0;
}
