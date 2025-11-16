#include <stdio.h>

int main() {
    int valores[20];
    int i, j, min, temp;

    printf("Digite 20 valores:\n");
    for (i = 0; i < 20; i++) {
        printf("Valor: ");
        scanf("%d", &valores[i]);
    }

    //encontra o menor elemento no vetor e coloca na primeira posição.
    //Depois encontra o segundo menor e coloca na segunda posição e assim por diante
    for (i = 0; i < 19; i++) {
        min = i;
        for (j = i + 1; j < 20; j++) {
            if (valores[j] < valores[min]) {
                min = j;
            }
        }

        temp = valores[i];
        valores[i] = valores[min];
        valores[min] = temp;
    }


    printf("\nVetor ordenado: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", valores[i]);
    }

    return 0;
}