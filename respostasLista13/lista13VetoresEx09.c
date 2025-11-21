#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, numero, repetido;

    printf("Sorteio de 10 números distintos:\n");

    for (i = 0; i < 10; ) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        repetido = 0;
        for (j = 0; j < i; j++) {
            if (numeros[j] == numero) {
                repetido = 1;
                break;
            }
        }

        if (repetido) {
            printf("Número já sorteado. Digite um número diferente.\n");
        } else {
            numeros[i] = numero;
            i++;
        }
    }


    printf("\nNúmeros sorteados:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}