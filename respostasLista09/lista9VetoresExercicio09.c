#include <stdio.h>

int main()
{
    int valores[50];
    int contador,  maior = 0;

    for (contador = 0; contador <= 49; contador++)
    {
        printf("Informe o valor para a posicao %d: ", contador);
        scanf("%d", &valores[contador]);
    }

    for (contador = 0; contador <= 49; contador++)
    {
        if (valores[contador] > maior)
        {
            maior = valores[contador];
        }
    }

    printf("maior numero: %d", maior);

    return 0;
}