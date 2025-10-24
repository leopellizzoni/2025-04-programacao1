#include <stdio.h>

int main()
{
    int valores[10];
    int contador;

    for (contador = 0; contador <= 9; contador++)
    {
        printf("Informe o valor %d: ", contador);
        scanf("%d", &valores[contador]);
    }

    printf("\n");

    for (contador = 0; contador <= 9; contador++)
    {
        printf(" %d ", valores[contador]);
    }

    return 0;
}