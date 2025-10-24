#include <stdio.h>

int main()
{
    int valores[20];
    int contador;
    int qtdImpares = 0;
    int somaPares = 0;

    for (contador = 0; contador <= 19; contador++)
    {
        printf("Informe o valor para a posicao %d: ", contador);
        scanf("%d", &valores[contador]);
    }

    printf("\nOs numeros pares sao: \n");

    for (contador = 0; contador <= 19; contador++)
    {
        if (valores[contador] % 2 == 0)
        {
            printf("numero %d | posicao %d\n", valores[contador], contador);
            somaPares = somaPares + valores[contador];
        }
    }

    if (somaPares > 0)
    {
        printf("\nSoma dos pares = %d\n", somaPares);
    }
    else
    {
        printf("\nNao houveram numeros pares\n");
    }

    printf("\nOs numeros Impares sao: \n");

    for (contador = 0; contador <= 19; contador++)
    {
        if (valores[contador] % 2 != 0)
        {
            printf("numero %d | posicao %d\n", valores[contador], contador);
            qtdImpares++;
        }
    }

    if (qtdImpares > 0)
    {
        printf("\nQuantidade dos impares = %d\n", qtdImpares);
    }
    else
    {
        printf("\nNao houveram numeros impares\n");
    }

    return 0;
}