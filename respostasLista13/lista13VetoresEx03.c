#include <stdio.h>

int main() {
    int vetor[10];
    int cont, contAuxiliar, numero, posicao, buscas;

    for (cont = 0; cont < 10; cont++) {
        printf("Digite num: ");
        scanf("%d", &vetor[cont]);
    }

    // Mostrando o vetor digitado
    printf("Vetor digitado:\n");
    for (cont = 0; cont < 10; cont++) {
        printf("%d ", vetor[cont]);
    }

    printf("\n\n");

    printf("Digite o numero a ser buscado:\n");
    scanf("%d", &numero);

    posicao = -1; //Inicializa a variável como não tendo encontrado o numero
    buscas = 0;    
    for (cont = 0; cont < 10; cont++) {
        buscas++;
        if (vetor[cont] == numero) {
            posicao = cont;
            break;
        }
    }

    if (posicao != -1) { //Se diferente de -1 achou a posicao onde esta o numero no vetor
        printf("Pesquisa: numero encontrado na posicao %d em um total de %d buscas\n", posicao, buscas);
    } else {
        printf("Pesquisa: numero nao encontrado em um total de %d buscas\n", buscas);
    }
    
    return 0;
}