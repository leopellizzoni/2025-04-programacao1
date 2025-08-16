#include <stdio.h>

int main() {
    int numero1, numero2;

    // Solicitar ao usuário que digite dois números inteiros
    printf("Digite o primeiro numero inteiro: "); 
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    // Verificar se os números são múltiplos entre si
    if (numero1 % numero2 == 0 || numero2 % numero1 == 0) {
        printf("Sao multiplos.\n");
    } else {
        printf("Nao sao multiplos.\n");
    }

    return 0;
}
