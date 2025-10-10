#include <stdio.h>

int main()
{
    int numero, numeroOriginal, frequencia = 0;
    printf("Informe um numero inteiro de no maximo 5 casas e nao maior que 99999: ");
    scanf("%d", &numero);
    numeroOriginal = numero;

    if (numero >= 0 && numero <= 99999)
    {
        for(int digitoComparacao = 0; digitoComparacao <= 9; digitoComparacao++)
        {
            while (numero > 0)
            {
                int digitoDoNumero = numero % 10;

                if (digitoDoNumero == digitoComparacao)
                {
                    frequencia++;
                }
                numero = numero / 10;
            }

            printf("O digito % aparece %d vez no numero.\n", digitoComparacao, frequencia);

            frequencia = 0;
            numero = numeroOriginal;
        }
    }
    else
    {
        printf("Numero fora do intervalo permitido.\n");
    }

    return 0;
}