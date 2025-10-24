#include <stdio.h>

int main()
{
    int valores[10];
    int contador;
    int valorBusca;
    int achou = 0;

    for (contador = 0; contador <= 9; contador++)
    {
        printf("Informe o numero %d: ", contador + 1);
        scanf("%d", &valores[contador]);
    }

    printf("\nInforme o valor de busca: ");
    scanf("%d", &valorBusca);

    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] == valorBusca)
        {
            achou = 1;
            break;
        }
    }

    if (achou == 1)
    {
        printf("O valor solicitado %d esta presente no vetor", valorBusca);
    }
    else
    {
        printf("Nao foi encontrado o valor %d no vetor", valorBusca);
    }

    return 0;
}