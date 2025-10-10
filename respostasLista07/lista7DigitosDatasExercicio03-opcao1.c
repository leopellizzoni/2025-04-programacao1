#include <stdio.h>

int main()
{
    int numero, numeroOriginal, totalDigitosIguais = 0, temDigitosRepetidos = 0;
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);
    numeroOriginal = numero;

    //For usado para percorrer todas as possibilidades de dígitos que um número pode ter. 
    for (int digitoDeComparacao = 0; digitoDeComparacao <= 9; digitoDeComparacao++)
    {
        while(numero > 0)
        {
            int ultimoDigitoDoNumero = numero % 10;
            
            if (ultimoDigitoDoNumero == digitoDeComparacao)
            {
                totalDigitosIguais++;
            }

            numero = numero / 10;
        }

        if (totalDigitosIguais >= 2)
        {
            temDigitosRepetidos = 1;
            break; //Como já descobriu se tem repetidos não precisa validar os outros, pois precisamos apenas informar se tem ou não repetidos.
        }

        numero = numeroOriginal; //Precisa para a próxima volta do for, visto que o while anterior manipulou a variavel numero.
        totalDigitosIguais = 0;  //Zera para a próxima comparação.
    }

    if (temDigitosRepetidos == 1) 
    {
        printf("O numero contem digitos repetidos.\n");
    } 
    else 
    {
        printf("O numero nao contem digitos repetidos.\n");
    }
}