#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;

    /*Variavel i apenas para contar as 10 vezes
    Lemos o numero em outro variavel para nao gerar problemas */

    for (i = 1; i <= 10; i++){
        printf("Informe o numero: ");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario % 2 == 0){
            printf("\Par: %d", numeroUsuario);
            printf("\n\n");
        }
    }
}
