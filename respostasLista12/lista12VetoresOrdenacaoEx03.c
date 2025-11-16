#include <stdio.h>

int main()
{
    int valores[10] = {1234, 9, 6, 5, 4, 3, 10, 201, 1, 1};
    int contador, outroContador, temp;

    for (contador = 0; contador < 10; contador++)
    {
        printf("Digite um numero: ");
        scanf("%d", &valores[contador]);
    }

    for (contador = 0; contador < 9; contador++)
    {
        for (outroContador = 0; outroContador < 9; outroContador++)
        {

            // Exatamente o mesmo programa do exercicio 2 apenas mudamos o sinal de comparação no IF.
            if (valores[outroContador] < valores[outroContador + 1])
            {
                temp = valores[outroContador];
                valores[outroContador] = valores[outroContador + 1];
                valores[outroContador + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado:\n");

    for (contador = 0; contador <= 9; contador++)
    {
        printf(" %d ", valores[contador]);
    }

    return 0;
}