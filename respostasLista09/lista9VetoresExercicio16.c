#include <stdio.h>

int main()
{
    int valores[10];
    int posicoesValoresBusca[10];
    int contador;
    int valorBusca;
    int achou = 0;
    int contadorVetorBusca = 0;

    for (contador = 0; contador <= 9; contador++)
    {
        printf("Informe o numero para a posicao %d: ", contador);
        scanf("%d", &valores[contador]);
    }

    printf("\nInforme o valor de busca: ");
    scanf("%d", &valorBusca);

    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] == valorBusca)
        {
            achou = 1;
            posicoesValoresBusca[contadorVetorBusca] = contador;
            contadorVetorBusca++;
        }
    }

    if (achou == 1)
    {
        printf("O valor solicitado %d esta presente no vetor nas seguintes posicoes: ", valorBusca);

        for (contador = 0; contador < contadorVetorBusca; contador++)
        {
            printf(" %d ", posicoesValoresBusca[contador]);
        }
    }
    else
    {
        printf("Nao foi encontrado o valor %d no vetor", valorBusca);
    }

    return 0;
}