#include <stdio.h>

int main(){
    int inicio, fim;
    int i, j;

    printf("Informe o primeiro numero para a tabuada: ");
    scanf("%d", &inicio);

    printf("\nInforme o ultimo numero para fazer a tabuada: ");
    scanf("%d", &fim);

    printf("\nOk, vamos gerar a tabuada da multipliacao do %d ate 0 %d para voce.\n", inicio, fim);

    for (i = inicio; i <= fim; i++){
        printf("\nTABUADA DO NUMERO %d\n\n", i);
        for (j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
}
