#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;

    //Fizemos um loop infinito.
    //Variavel i começa com zero e diminuimos 1 cada vez.
    //Enquanto for menor que zero seguira executando.

    for (i = 0; i <= 0; i--){
        printf("Informe o numero: ");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario == 0){
            break;
        }
        else if (numeroUsuario % 2 == 0){
            printf("\nPar\n");
        }
    }
}
