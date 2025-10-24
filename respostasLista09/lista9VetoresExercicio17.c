#include <stdio.h>

int main()
{
    int valoresA[10];
    int valoresB[10];
    int contadorA;
    int contadorB;

    for (contadorA = 0; contadorA <= 9; contadorA++)
    {
        printf("Informe o valor para o Primeiro vetor na posicao %d: ", contadorA);
        scanf("%d", &valoresA[contadorA]);
    }

    printf("\nAgora vamos informar o segundo vetor para comparar\n\n");

    for (contadorB = 0; contadorB <= 9; contadorB++)
    {
        printf("Informe o valor para o Segundo vetor na posicao %d: ", contadorB);
        scanf("%d", &valoresB[contadorB]);
    }

    printf("\n\n");

    // Precisa comparar cada posicao do A com todas as posicoes do B
    // Nao sabemos em qual esta.
    for (contadorA = 0; contadorA <= 9; contadorA++)
    {
        for (contadorB = 0; contadorB <= 9; contadorB++)
        {
            if (valoresB[contadorB] == valoresA[contadorA])
            {
                printf("O valor %d esta no primeiro vetor e tambem no segundo vetor.\n", valoresA[contadorA]);
                break; // Se ja achou e sabe que esta contido nao precisa seguir olhando os demais.
            }
        }
    }

    return 0;
}