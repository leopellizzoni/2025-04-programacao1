#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;
    int numeroVezes;

    /*Variavel i apenas para contar as 10 vezes
    Lemos o numero em outro variavel para nao gerar problemas
    Lemos o numero de vezes que precisamos fazer em outra variavel*/

    printf("Quantas vezes executar o For: ");
    scanf("%d", &numeroVezes);

    //Repere que o contador (i) começa com zero nesse exemplo e nao temos mais o <=
    for (i = 0; i < numeroVezes; i++){
        printf("Informe o numero: ");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario % 2 != 0){
            printf("\Impar: %d", numeroUsuario);
            printf("\n\n");
        }
    }
}
