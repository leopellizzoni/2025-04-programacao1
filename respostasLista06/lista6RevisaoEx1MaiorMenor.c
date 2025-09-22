#include <stdio.h>

int main(){
    int maior = 0, menor = 2147483647, cont, totalNum, ultimoNumero;

    printf("Por favor, informe quantos numeros voce quer digitar: ");
    scanf("%d", &totalNum);

    for(cont = 0; cont < totalNum; cont++){
        printf("\n%d) Informe o numero: ", cont + 1);
        scanf("%d", &ultimoNumero);

        if (ultimoNumero > maior){
            maior = ultimoNumero;
        }

        if (ultimoNumero < menor){
            menor = ultimoNumero;
        }
    }

    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
}
