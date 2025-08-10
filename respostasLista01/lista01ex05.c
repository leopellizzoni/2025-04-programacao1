#include <stdio.h>

int main() {
    float valor1, valor2;
    float soma, subtracao, multiplicacao, divisao;

    // Solicita ao usuário digitar o primeiro valor real
    printf("Digite o primeiro valor real:\n");
    scanf("%f", &valor1);

    // Solicita ao usuário digitar o segundo valor real
    printf("Digite o segundo valor real:\n");
    scanf("%f", &valor2);

    // Calcula as operações
    soma = valor1 + valor2;
    subtracao = valor1 - valor2;
    multiplicacao = valor1 * valor2;
	divisao = valor1 / valor2;
    
    // Mostra os resultados na tela
    printf("Números digitados: %.2f e %.2f\n", valor1, valor2);
    printf("A soma dos números é: %.2f\n", soma);
    printf("A subtração dos números é: %.2f\n", subtracao);
    printf("A multiplicação dos números é: %.2f\n", multiplicacao);
    printf("A divisão dos números é: %.2f\n", divisao);

    return 0;
}
