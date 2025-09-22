#include <stdio.h>

int main(){
    float maior = 0, menor = 2147483647, atual = 0, media = 0;
    int cont;

    printf("Leitura das temperaturas dos 30 dias");

    for(cont = 0; cont < 30; cont++){
        printf("\nInforme a temperatura do dia %d: ", cont + 1);
        scanf("%f", &atual);

        if (atual > maior){
            maior = atual;
        }

        if (atual < menor){
            menor = atual;
        }

        media += atual;
    }

    //Calculo da media depois que somou tudo.
    media = media / 30;

    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);
    printf("\nMedia: %.2f", media);
}
