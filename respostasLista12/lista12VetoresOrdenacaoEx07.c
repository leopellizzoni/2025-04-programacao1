#include <stdio.h>

int main() {
    int valores[20];
    int i, j, novo_valor;

    printf("Digite os 10 primeiros valores em ordem crescente:\n");

    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }


    printf("Digite os proximos 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Novo valor %d: ", i + 1);

        //Guarda o novo valor na variavel e nao no vetor.
        //Depois vai ser achado a posição do vetor para colocar esse valor.
        scanf("%d", &novo_valor);

        //Como ja tem os 10 primeiros em ordem crescente iniciamos de 9 mais o proximo que estamos colocando
        //Começa do final e e vai para o inicio
        j = 9 + i;

        while (j >= 0 && valores[j] > novo_valor) {
            valores[j + 1] = valores[j];
            j--;
        }

        valores[j + 1] = novo_valor; // Insere o novo valor na posição correta
    }

    printf("Vetor: ");

    for (i = 0; i < 20; i++) {
        printf("%d ", valores[i]);
    }

    return 0;
}
