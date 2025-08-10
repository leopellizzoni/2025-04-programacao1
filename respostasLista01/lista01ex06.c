#include <stdio.h>

int main() {
    int valor1, valor2, diferenca, resultado;

    printf("Digite o primeiro valor inteiro:\n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro:\n");
    scanf("%d", &valor2);

    diferenca = valor1 - valor2;

    resultado = diferenca * diferenca;

    printf("O quadrado da diferença é: %d\n", resultado);

    return 0;
}
