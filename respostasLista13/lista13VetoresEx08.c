#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetorDif[10];
    int i, j, existe, tamDif = 0;

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
        existe = 0;
        for (j = 0; j < 10; j++) {
            if (vetor1[i] == vetor2[j]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            vetorDif[tamDif] = vetor1[i];
            tamDif++;
        }
    }

    printf("\nVetor 1 = ");
    for (i = 0; i < 10; i++) {
        printf(" %d ", vetor1[i]);
    }

    printf("\nVetor 2 = ");
    for (i = 0; i < 10; i++) {
        printf(" %d ", vetor2[i]);
    }

    printf("\nDiferença (Vetor 1 - Vetor 2) = ");
    for (i = 0; i < tamDif; i++) {
        printf(" %d ", vetorDif[i]);
    }

    return 0;
}
