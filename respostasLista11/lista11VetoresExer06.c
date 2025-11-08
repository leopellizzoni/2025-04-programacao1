#include<stdio.h>

int main(){
    float valores[10];
    int contador, contadorRealocacao, outroContador;
    float num, media;

    for (contador = 0; contador <= 9; contador++){
        printf("Informe um numero: ");
        scanf("%f", &valores[contador]);
    }

    while (1){
        printf("Informe um numero: ");
        scanf("%f", &num);

        if (num < 0){
            printf("\n\nO programa sera encerrado.\n\n");
            break;
        }

        //Faz a realocação dos valores para acrescentar o novo valor no final
        for(contadorRealocacao = 0; contadorRealocacao < 9; contadorRealocacao++){
            valores[contadorRealocacao] = valores[contadorRealocacao + 1];
        }

        //Depois que realocou os valores atribui para a última posição o novo valor lido.
        valores[9] = num;

        media = 0;
        for(outroContador = 0; outroContador <=9; outroContador++){
            media = media + valores[outroContador];
        }

        media = media / 10;
        printf("Media: %.2f\n", media);
    }
}
