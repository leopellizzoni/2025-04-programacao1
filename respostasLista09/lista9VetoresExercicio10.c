#include <stdio.h>

int main()
{
    int valores[80];
    int contador, menorValor, menorPosicao;

    for (contador = 0; contador <= 79; contador++)
    {
        printf("Informe o valor para a posicao %d: ", contador);
        scanf("%d", &valores[contador]);
    }

    for (contador = 0; contador <= 79; contador++)
    {
        if (contador == 0)
        {
            menorPosicao = 0;
            menorValor = valores[0];
        }
        else if (valores[contador] < menorValor)
        {
            menorPosicao = contador;
            menorValor = valores[contador];
        }
    }

    printf("menor elemento do vetor foi %d e a sua posicao no vetor e %d", menorValor, menorPosicao);

    return 0;
}