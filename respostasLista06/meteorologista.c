#include <stdio.h>

int main()
{
    int mes, totalDias = 31, contador, ano;
    float temperatura, media = 0, menor, maior;

    printf("Informe o numero do mes que você vai registrar as temperaturas: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (mes == 2)
    {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        {
            totalDias = 29;
        }
        else
        {
            totalDias = 28;
        }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        totalDias = 30;
    }

    //Observar a variavel totalDias usada no for.
    for (contador = 1; contador <= totalDias; contador++)
    {
        printf("Informe a temperatura do dia %d/%d/%d: ", contador, mes, ano);
        scanf("%f", &temperatura);

        if (contador == 1)
        {
            maior = temperatura;
            menor = temperatura;
        }

        if (temperatura > maior)
        {
            maior = temperatura;
        }

        if (temperatura < menor)
        {
            menor = temperatura;
        }

        media = media + temperatura;
    }

    media = media / totalDias;

    printf("\nA menor temperatura foi: %.2f: ", menor);
    printf("\nA maior temperatura foi: %.2f: ", maior);
    printf("\nA media temperatura foi: %.2f: ", media);

    return  0;
}