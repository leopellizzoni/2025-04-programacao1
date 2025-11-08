#include <stdio.h>

int main(){
    int valores[10];
    int contador = 0, outroContador, temporaria;

    for (contador = 0; contador <= 9; contador++){
        printf("Informe o numero: ");
        scanf("%d", &valores[contador]);
    }

    printf("\nFazendo a troca dos elementos\n");

    outroContador = 9; //Contador que vai do final para o começo

    //Vai de 2 por vez então não precisamos ir do 0 ate o 9
    for (contador = 0; contador <= 4; contador++){
        temporaria = valores[contador];
        valores[contador] = valores[outroContador];
        valores[outroContador] = temporaria;
        outroContador--; //Aqui precisamos fazer manual pois esse contador é nos que controlamos.
    }

    printf("\nResultado do Vetor: \n");

    for (contador = 0; contador <= 9; contador++){
        printf(" %d ", valores[contador]);
    }
}
