#include <stdio.h>

int main() {
    int vetor[10] = {0}; //esse {0} quer dizer que inicializamos com zero os valores
    int i, j, numero;

    for (i = 0; i < 5; i++) {
        printf("Informe o num: ");
        scanf("%d", &vetor[i]);
    }

    // Ordenando os primeiros 5 n�meros inseridos no vetor
    //Observar que o vetor � de 10 mas foram lidos apenas 5 numeros
    //por isso 0 ate 4.
    //Observar que aqui temos um algoritmo que ja foi usado antes nos outros exercicios, mesma coisa apenas
    //mudando os nomes das variaveis
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (vetor[i] > vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Vetor depois da ordena��o inicial:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\n");

    //Primeiro for � para solicitar os outros 5 numeros
    //O While dentro do for �
    for (i = 5; i < 10; i++) {
        printf("\nDigite mais um numero: ");
        scanf("%d", &numero);

        //Buscar onde colocar o novo numero
        //Realoca os numeros dentro do vetor
        //enquanto o numero do vetor for maior que o numero lido por ultimo
        j = i - 1;
        while (j >= 0 && vetor[j] > numero) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = numero;

        // Exibindo o vetor ap�s cada inser��o
        printf("\nVetor depois do numero %d adicionado:\n", numero);
        for (j = 0; j <= i; j++) {
            printf(" %d ", vetor[j]);
        }
        printf("\n");
    }

    printf("Vetor final ordenado com todos os elementos preenchidos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\n");

    return 0;
}
