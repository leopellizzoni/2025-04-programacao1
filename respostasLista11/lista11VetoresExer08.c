#include <stdio.h>

int main(){
    int valores[20];
    int contador, valRemover, outroContador;

    for(contador = 0; contador <= 19; contador++){
        printf("informe o valor: ");
        scanf("%d", &valores[contador]);
    }

    printf("Aqui estao os valores informados: ");

    for(contador = 0; contador <= 19; contador++){
        printf(" %d ", valores[contador]);
    }

    printf("\nAgora informe o valor a ser remover do vetor: ");
    scanf("%d", &valRemover);

    for(contador = 0; contador <= 19; contador++){
        if(valores[contador] == valRemover){
            //O outro contador inicia daquela posicao onde esta o valore a ser removido
            for(outroContador = contador; outroContador < 19; outroContador++){
                valores[outroContador] = valores[outroContador + 1];
            }
            valores[19] = 0;
        }
    }

    printf("\nAqui esta o vetor sem o valor informado: ");

    for(contador = 0; contador <= 19; contador++){
        if (valores[contador] == 0){
            break;
        }

        printf(" %d ", valores[contador]);
    }
}
