#include <stdio.h>

int main() {
    int numero, contador_impares = 0;

    // Solicitar ao usuário que digite seis números inteiros
    printf("Digite o primeiro numero inteiro: "); 
    scanf("%d", &numero);

    // Verificar se o primeiro número é ímpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o segundo número é ímpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o terceiro número é ímpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o quarto numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o quarto número é ímpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o quinto numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o quinto número é ímpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    printf("Digite o sexto numero inteiro: ");
    scanf("%d", &numero);

    // Verificar se o sexto número é ímpar
    if (numero % 2 != 0) {
        contador_impares++;
    }

    // Mostrar a quantidade de valores ímpares informados
    printf("Quantidade de numeros impares: %d\n", contador_impares);

    return 0;
}
