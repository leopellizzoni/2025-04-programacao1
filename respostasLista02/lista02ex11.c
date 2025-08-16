#include <stdio.h>

int main() {
    float numero1, numero2, diferenca;

    // Solicitar ao usuário que digite dois números reais
    printf("Digite o primeiro numero real: "); 
    scanf("%f", &numero1);

    printf("Digite o segundo numero real: ");
    scanf("%f", &numero2);

    // Verificar qual é o maior número e calcular a diferença
    if (numero1 > numero2) {
        diferenca = numero1 - numero2;
        printf("O maior valor e %.2f e a diferenca do maior pelo menor valor e %.2f\n", numero1, diferenca);
    } else if (numero2 > numero1) {
        diferenca = numero2 - numero1;
        printf("O maior valor e %.2f e a diferenca do maior pelo menor valor e %.2f\n", numero2, diferenca);
    } else {
        printf("Os dois numeros sao iguais, portanto a diferenca e 0.\n");
    }

    return 0;
}
