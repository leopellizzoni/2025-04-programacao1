#include <stdio.h>

int main()
{
    float valores[15];
    int contador,temValor = 0;
    float media, menorAcimaDaMedia = 0;

    for (contador = 0; contador <= 14; contador++)
    {
        printf("Informe o valor para a posicao %d: ", contador);
        scanf("%f", &valores[contador]);
        media = media + valores[contador];
    }

    media = media / 15;

    for (contador = 0; contador <= 9; contador++)
    {
        if (valores[contador] > media)
        {
            // Não sabemos qual vai ser a posicao do primeiro numero maior que a media
            // Por isso um controle e no primeiro maior que a media ja coloca definido
            if (temValor == 0)
            {
                temValor = 1;
                menorAcimaDaMedia = valores[contador];
            }
            else if (valores[contador] < menorAcimaDaMedia)
            {
                menorAcimaDaMedia = valores[contador];
            }
        }
    }

    printf("\n\nMedia foi de %f\n", media);

    if (temValor)
    {
        printf("O menor acima da media foi: %f", menorAcimaDaMedia);
    }
    else
    {
        printf("Nao foi encontrado o menor valor maior que a media");
    }

    return 0;
}