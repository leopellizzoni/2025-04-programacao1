#include <stdio.h>

int main() {
    int numero, soma_pares = 0;

    // Solicitar ao usuário que digite seis números inteiros
    printf("Digite seis numeros inteiros:\n"); 

    // Leitura e verificação de cada número
    printf("Numero 1: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        soma_pares = soma_pares + numero;
    }

    printf("Numero 2: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        soma_pares = soma_pares + numero;
    }

    printf("Numero 3: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        soma_pares = soma_pares + numero;
    }

    printf("Numero 4: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        soma_pares = soma_pares + numero;
    }

    printf("Numero 5: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        soma_pares = soma_pares + numero;
    }

    printf("Numero 6: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        soma_pares = soma_pares + numero;
    }

    // Mostrar a soma dos valores pares
    printf("A soma dos valores pares informados e: %d\n", soma_pares);

    return 0;
}
