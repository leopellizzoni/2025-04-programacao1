#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], intersecao[10];
    int i, j, k = 0, existe;

    printf("Digite 10 números para o Vetor 1:\n");
    for (i = 0; i < 10; i++) {
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite 10 números para o Vetor 2:\n");
    for (i = 0; i < 10; i++) {
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++) {

        for (j = 0; j < 10; j++) {
            if (vetor1[i] == vetor2[j]) {
                existe = 0;

                for (int l = 0; l < k; l++) {
                    if (intersecao[l] == vetor1[i]) {
                        existe = 1;
                        break;
                    }
                }

                if (existe == 1) {
                    intersecao[k] = vetor1[i];
                    k++;
                }

                break; 
            }
        }

    }

    printf("\nVetor 1 =  ");
    for (i = 0; i < 10; i++) {
        printf(" %d ", vetor1[i]);
    }

    printf("\nVetor 2 =  ");
    for (i = 0; i < 10; i++) {
        printf(" %d ", vetor2[i]);
    }

    printf("\nIntersecção =  ");
    for (i = 0; i < k; i++) {
        printf(" %d ", intersecao[i]);
    }

    return 0;
}