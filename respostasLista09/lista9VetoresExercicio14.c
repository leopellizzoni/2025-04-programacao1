#include <stdio.h>

int main()
{
    int valores[21]; // 21 pois considera o que digitou 1 deles para depois facilitar gerar os demais
    int contador;
    int primeiroTermo;
    int razao;

    printf("Informe o primeiro termo: ");
    scanf("%d", &valores[0]);

    printf("Informe a razao: ");
    scanf("%d", &razao);

    // Atencao ao contador iniciando em 1.
    // Pos zero (0) foi colocada manual pelo scanf no primeiro termo.
    for (contador = 1; contador <= 19; contador++)
    {
        // contador - 1 = vai pegar a posicao anterior.
        valores[contador] = valores[contador - 1] + razao;
    }

    printf("\nSeguem os 20 primeiros termos da sequencia: ");

    for (contador = 1; contador <= 19; contador++)
    {
        printf(" %d ", valores[contador]);
    }

    return 0;
}