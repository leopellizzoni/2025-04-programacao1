#include <stdio.h>

int main()
{
    int valores[10];
    int contador;
    float media;

    for (contador = 0; contador <= 9; contador++)
    {
        printf("Informe o valor para a posicao %d: ", contador);
        scanf("%d", &valores[contador]);
        media = media + valores[contador]; // ja vai somando para depois dividir pelo total
    }

    media = media / 10; // uma vez que tem o somatorio falta dividir pelo total

    printf("\n\nMedia foi de %f\n", media);
    printf("Numeros acima da media: ");
    
    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] > media)
        {
            printf(" %d ", valores[contador]);
        }
    }

    return 0;
}