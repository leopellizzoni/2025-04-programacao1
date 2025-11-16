#include<stdio.h>

int main(){
    int valores[20], v[10], w[10];
    int min, i, j, temp;

    printf("Digite 10 valores para o vetor V:\n");
    for (i = 0; i <= 9; i++) {
        printf("Vetor V, digite o valor: ");
        scanf("%d", &v[i]);
    }

    printf("Digite 10 valores para o vetor W:\n");
    for (i = 0; i <= 9; i++) {
        printf("Vetor V, digite o valor: ");
        scanf("%d", &w[i]);
    }

    //Preenche as 10 primeiras posições do vetor de 20 posições
    for (i = 0; i <= 9; i++){
        valores[i] = v[i];
    }

    //Preenche o vetor da posição 10 em diante
    for (i = 10; i <= 19; i++){
        valores[i] = v[i - 10];
    }

    //Faz a ordenação do vetor do 20.
    //mesmo procedimento de ordenação dos exercicios anteriores.
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

    printf("Valores do Vetor de tamanho 20: \n");
    for (i = 0; i <= 19; i++){
        printf(" %d ", valores[i]);
    }

    return 0;
}