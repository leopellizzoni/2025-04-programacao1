#include <stdio.h>

int main() {
    int numero;

    printf("Informe dez numeros inteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);

        int soma = 0;
        int tempNumero = numero;

        while (tempNumero > 0) {
            soma += tempNumero % 10;
            tempNumero = tempNumero / 10;
        }

        printf("Soma dos digitos do numero %d: %d\n", i + 1, soma);
    }
}