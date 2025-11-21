#include <stdio.h>

int main() {
    int vetorOriginal[10];
    int vetorParaOrdenar[10];
    int contador, outroContador, posicaoTemp, temporaria, totalDeTrocasFeitas;

    //Faz a leitura dos valores
    for (contador = 0; contador < 10; contador++) {
        printf("Digite o numero %d para o vetor: ", contador + 1);
        scanf("%d", &vetorOriginal[contador]);
    }

    printf("\n\n");

    //====================================================================
    //====================================================================

    //Copia os valores originais para o vetor usado na ordenacao
    for (contador = 0; contador < 10; contador++) {
        vetorParaOrdenar[contador] = vetorOriginal[contador];
    }

    //Faz a ordenacao utilizando o Metodo da Selecao
    totalDeTrocasFeitas = 0;
    for (contador = 0; contador < 9; contador++) {
        posicaoTemp = contador;
        for (outroContador = contador + 1; outroContador < 10; outroContador++) {
            if (vetorParaOrdenar[outroContador] < vetorParaOrdenar[posicaoTemp]) {
                posicaoTemp = outroContador;
            }
        }
        if (posicaoTemp != contador) {
            temporaria = vetorParaOrdenar[contador];
            vetorParaOrdenar[contador] = vetorParaOrdenar[posicaoTemp];
            vetorParaOrdenar[posicaoTemp] = temporaria;
            totalDeTrocasFeitas++;
        }
    }

    //Aqui terminou a troca com base na selecao e sera mostrado a quantidade de elementos que foram trocados de lugar
    printf("Metodo da Selecao | Quantidade de Trocas: %d\n", totalDeTrocasFeitas);
    printf("Aqui esta o vetor: ");
    for (contador = 0; contador <= 9; contador++){
        printf(" %d ", vetorParaOrdenar[contador]);
    }

    //====================================================================
    //====================================================================

    //Novamente coloca os valores conforme a leitura do vetor original.
    for (contador = 0; contador < 10; contador++) {
        vetorParaOrdenar[contador] = vetorOriginal[contador];
    }

    //Metodo da Bolha
    totalDeTrocasFeitas = 0;
    for (contador = 0; contador < 9; contador++) {
        for (outroContador = 0; outroContador < 9; outroContador++) {
            if (vetorParaOrdenar[outroContador] > vetorParaOrdenar[outroContador + 1]) {
                temporaria = vetorParaOrdenar[outroContador];
                vetorParaOrdenar[outroContador] = vetorParaOrdenar[outroContador + 1];
                vetorParaOrdenar[outroContador + 1] = temporaria;
                totalDeTrocasFeitas++;
            }
        }
    }

    printf("\n\nMetodo da Bolha   | Quantidade de Trocas: %d\n", totalDeTrocasFeitas);
    printf("Aqui esta o vetor: ");
    for (contador = 0; contador <= 9; contador++){
        printf(" %d ", vetorParaOrdenar[contador]);
    }

    return 0;
}