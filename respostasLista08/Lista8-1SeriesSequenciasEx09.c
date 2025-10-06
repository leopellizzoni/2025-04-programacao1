#include <stdio.h>

int main(){
    int cont, numeroSerie;
    float soma;

    cont = 1;

    printf("Qual o numero da serie: ");
    scanf("%d", &numeroSerie);

    soma = 0;
    while (cont <= numeroSerie){
        //Aten��o ao detalhe: divis�o por 1.0 e n�o por 1.
        //A linguagem C trata de formas diferentes. 1 � inteiro e 1.0 � float
        soma = soma + (1.0 / cont);
        cont++;
    }

    printf("O total da serie H(%d) e: %f", numeroSerie, soma);
}