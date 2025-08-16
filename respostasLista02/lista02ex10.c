#include <stdio.h>

int main() {
    float numero1, numero2;

    // Solicitar ao usuário que digite dois números reais
    printf("Digite o primeiro numero real: "); 
    scanf("%f", &numero1);

    printf("Digite o segundo numero real: ");
    scanf("%f", &numero2);

    // Verificar qual é o menor número e mostrar os valores em ordem crescente
    if (numero1 < numero2) {
        printf("Os numeros em ordem crescente sao: %.2f e %.2f\n", numero1, numero2);
    } else if (numero2 < numero1) {
        printf("Os numeros em ordem crescente sao: %.2f e %.2f\n", numero2, numero1);
    } else {
        printf("Os dois numeros sao iguais: %.2f e %.2f\n", numero1, numero2);
    }

    return 0;
}
