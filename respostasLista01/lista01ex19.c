#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor1, valor2, diferenca, modulo_diferenca;

    // Solicitar ao usuário para inserir os dois valores
    printf("Digite o primeiro valor:\n");
    scanf("%d", &valor1);

    printf("Digite o segundo valor:\n");
    scanf("%d", &valor2);

    // Calcular a diferença entre os dois valores
    diferenca = valor1 - valor2;

    // Calcular o módulo da diferença usando a função abs
    modulo_diferenca = abs(diferenca);

    // Mostrar o resultado na tela
    printf("O módulo da diferença entre %d e %d é %d\n", valor1, valor2, modulo_diferenca);

    return 0;
}
