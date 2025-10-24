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

    int totalNegativos = 0;
    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] < 0)
        {
            totalNegativos++;
        }

        printf(" %d ", valores[contador]);
    }

    printf("\n\nTotal de numero negativos: %d", totalNegativos);

    return 0;
}