#include <stdio.h>

int main(){
    int numeros[5];
    int numerosNaoRepetidos[5];
    int cont, cont2, contNaoRepetidos = 0;
    int possoAdicionar, total;
    for (cont = 0; cont <= 4; cont++){
        printf("Informe um numero: ");
        scanf("%d", &numeros[cont]);
    }

    for (cont = 0; cont <= 4; cont++){
        possoAdicionar = 1; //Valor 1 (true/verdadeiro) para pode adicionar e valor 0 (false/falso) para nao pode adicionar
        for (cont2 = 0; cont2<=contNaoRepetidos; cont2++){
            if (numeros[cont] == numerosNaoRepetidos[cont2]){
                possoAdicionar = 0;
                break;
            }
        }

        if (possoAdicionar == 1){
            numerosNaoRepetidos[contNaoRepetidos] = numeros[cont];
            contNaoRepetidos++;
        }
    }

    for (cont=0; cont< contNaoRepetidos; cont++){
        total = 0;
        for (cont2 = 0; cont2 <= 4; cont2++){
            if (numeros[cont2] == numerosNaoRepetidos[cont]){
                total++;
            }

        }


        printf("\nO numero %d aparece %d veze(s)",numerosNaoRepetidos[cont], total);

    }
    return 0;
}