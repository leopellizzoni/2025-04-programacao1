#include <stdio.h>

int main() {
    float valor1, valor2, resultado;

    printf("Digite o primeiro valor real:\n");
    scanf("%f", &valor1);

    printf("Digite o segundo valor real:\n");
    scanf("%f", &valor2);

    resultado = (valor1 * 4 + valor2 * 6) / 2;

    printf("O resultado é: %.2f\n", resultado);

    return 0;
}
