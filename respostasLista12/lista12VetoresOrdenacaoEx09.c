#include <stdio.h>

int main() {
    int pesos[5];
    float alturas[5];
    int i, j, min;
    float tempAltura;
    int tempPeso;

    for (i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Peso (int): ");
        scanf("%d", &pesos[i]);
        printf("Altura (float): ");
        scanf("%f", &alturas[i]);
        printf("\n");
    }

    //Mesma ordenação do exercício 8
    //Diferença é que se usa a altura para achar o menor
    //E com as posições definidas se ajusta o peso também para que não se troque o peso da pessoa 1 com pessoa 2
    for (i = 0; i < 4; i++) {
        min = i;
        for (j = i + 1; j < 5; j++) {
            if (alturas[j] < alturas[min]) {
                min = j;
            }
        }
        // Troca de alturas
        tempAltura = alturas[i];
        alturas[i] = alturas[min];
        alturas[min] = tempAltura;

        // Troca de pesos correspondente
        tempPeso = pesos[i];
        pesos[i] = pesos[min];
        pesos[min] = tempPeso;
    }

    printf("\nLista de pesos e alturas a partir da ordem crescente das alturas das pessoas:\n");

    for (i = 0; i < 5; i++) {
        printf("Pessoa %d: Peso = %d kg, Altura = %.2f \n", i + 1, pesos[i], alturas[i]);
    }

    return 0;
}