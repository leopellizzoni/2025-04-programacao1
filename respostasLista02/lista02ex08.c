#include <stdio.h>

int main() {
    int numero1, numero2;

    // Solicitar ao usuário que digite dois números inteiros
    printf("Digite o primeiro numero inteiro: "); 
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    // Verificar qual é o maior número
    if (numero1 > numero2) {
        printf("O maior valor digitado e: %d\n", numero1);
    } else if (numero2 > numero1) {
        printf("O maior valor digitado e: %d\n", numero2);
    } else {
        printf("Os dois numeros sao iguais: %d\n", numero1);
    }

    return 0;
}
