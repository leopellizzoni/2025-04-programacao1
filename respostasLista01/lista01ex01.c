#include <stdio.h>

int main() {
    int valor1, valor2;

    // Solicita ao usuário digitar o primeiro valor inteiro
    printf("Digite o primeiro valor inteiro:\n");
    scanf("%d", &valor1);

    // Solicita ao usuário digitar o segundo valor inteiro
    printf("Digite o segundo valor inteiro:\n");
    scanf("%d", &valor2);

    // Calcula a soma dos números
    int soma = valor1 + valor2;

    // Mostra o resultado na tela
    printf("A soma dos números é: %d\n", soma);

    return 0;
}
