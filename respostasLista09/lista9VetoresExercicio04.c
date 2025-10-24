#include <stdio.h>

int main()
{
    int valores[10];
    int contador;

    for (contador = 0; contador <= 9; contador++)
    {
        printf("Informe o valor para a posicao %d: ", contador);
        scanf("%d", &valores[contador]);
    }

    printf("\n\nPosicao dos numeros menores que zero (0):\n");

    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] < 0)
        {
            printf(" %d ", contador);
        }
    }

    return 0;
}