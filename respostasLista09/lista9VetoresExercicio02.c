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

    printf("\n\nAqui estao os valores na ordem invertida: \n");

    for (contador = 9; contador >= 0; contador--)
    {
        printf("Valor %d: %d\n", contador, valores[contador]);
    }

    return 0;
}