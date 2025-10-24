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

    printf("\n\nNumeros pares\n");

    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] % 2 == 0)
        {
            printf(" %d ", valores[contador]);
        }
    }

    printf("\n\nNumeros Impares\n");

    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] % 2 != 0)
        {
            printf(" %d ", valores[contador]);
        }
    }

    return 0;
}