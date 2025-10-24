#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[10];
    int contador;

    for (contador = 0; contador <= 9; contador++)
    {
        printf("Informe o valor para a posicao %d: ", contador);
        scanf("%d", &valores[contador]);
    }

    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] < 0)
        {
            valores[contador] = abs(valores[contador]);
        }

        printf(" %d ", valores[contador]);
    }

    return 0;
}