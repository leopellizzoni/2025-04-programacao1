#include <stdio.h>

int main() {
    int valores[10] = {1234,9,6,5,4,3,10,201,1,1};
    int contador, outroContador, temp;

    /*for (contador = 0; contador < 10; contador++) {
        printf("Digite um numero: ");
        scanf("%d", &valores[contador]);
    }*/

    //Precisa comparar cada um dos elementos com os demais, por isso 2 for
    //Pega o primeiro numero e vai comparando para depois trocar quando precisar
    for (contador = 0; contador < 9; contador++) {

        for (outroContador = 0; outroContador < 9; outroContador++) {

            if (valores[outroContador] > valores[outroContador + 1]) {
                temp = valores[outroContador];
                valores[outroContador] = valores[outroContador + 1];
                valores[outroContador + 1] = temp;
            }

        }
    }

    printf("Vetor ordenado:\n");

    for (contador = 0; contador <= 9; contador++) {
        printf(" %d ", valores[contador]);
    }

    return 0;
}
