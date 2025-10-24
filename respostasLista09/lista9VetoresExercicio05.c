#include <stdio.h>

int main()
{
    int valores[10];
    int contador;

    // For da leitura dos numeros
    for (contador = 0; contador <= 9; contador++)
    {
        printf("Informe o valor para a posicao %d: ", contador);
        scanf("%d", &valores[contador]);
    }

    printf("\n\nPosicao dos Numeros Primos\n");

    // Primeiro For para o vetor dos numeros lidos, para percorer todos os numeros
    for (contador = 0; contador <= 9; contador++)
    {
        // Variavel controle para saber se precisa imprimir ou nao.
        // Iniciar com 1 assumindo que é primo. Depois no resto do programa muda para 0 (zero) caso nao seja
        int numeroPrimo = 1;

        // Este For faz o processamento para saber se o numero da posicao atual do vetor é primo.
        if (valores[contador] > 1)
        {
            for (int i = 2; i < valores[contador]; i++)
            {
                if (valores[contador] % i == 0)
                {
                    numeroPrimo = 0;
                    break;
                }
            }
        }
        else
        {
            numeroPrimo = 0;
        }

        if (numeroPrimo == 1)
        {
            printf(" %d ", contador);
        }
    }

    return 0;
}