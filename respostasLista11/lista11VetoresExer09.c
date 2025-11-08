#include <stdio.h>

int main(){
    int valores[30], valoresInvertidos[30];
    int contador, contInvertido;

    for(contador = 0; contador <= 29; contador++){
        printf("informe o valor: ");
        scanf("%d", &valores[contador]);
    }

    contInvertido = 29;//Começa do final pois o outro contador vai começar do inicio
    for(contador = 0; contador <= 29; contador++){
        valoresInvertidos[contInvertido] = valores[contador];
        contInvertido--;//nossa responsabilidade fazer o controle deste contador
    }

    printf("Aqui estao os 2 vetores: ");

    for(contador = 0; contador <= 29; contador++){
        printf(" %d ", valores[contador]);
    }

    printf("\n");

    for(contador = 0; contador <= 29; contador++){
        printf(" %d ", valoresInvertidos[contador]);
    }
}
