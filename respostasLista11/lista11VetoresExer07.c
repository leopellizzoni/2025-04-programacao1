#include <stdio.h>

int main(){
    int valores[20];
    int contador, outroContador;

    for(contador = 0; contador <= 19; contador++){
        printf("informe o valor: ");
        scanf("%d", &valores[contador]);
    }

    printf("Aqui estao os valores informados: ");

    for(contador = 0; contador <= 19; contador++){
        printf(" %d ", valores[contador]);
    }

    //Faz a compactacao
    for(contador = 0; contador < 19; contador++){
        if (valores[contador] > 0){
            continue;
        }
        for (outroContador = contador + 1; outroContador <= 19; outroContador++){
            if(valores[outroContador] > 0){
                valores[contador] = valores[outroContador];
                valores[outroContador] = 0;
                break;
            }
        }
    }

    printf("\n\nAqui estao os valores compactados: ");

    for(contador = 0; contador <= 19; contador++){

        if(valores[contador] <= 0){
            break;
        }

        printf(" %d ", valores[contador]);
    }
}
