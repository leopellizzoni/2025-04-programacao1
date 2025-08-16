#include <stdio.h>

int main() {
    int numero;

    // Solicitar ao usuário que digite um número inteiro
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero);

    // Verificar se o número é maior, menor ou igual a zero
    if (numero > 0) {
        printf("O numero digitado e maior que zero.\n");
    } 

    if (numero < 0) {
        printf("O numero digitado e menor que zero.\n");
    } 

    if (numero == 0)
    {
        printf("O numero digitado e igual a zero.\n");
    }

    return 0;
}
