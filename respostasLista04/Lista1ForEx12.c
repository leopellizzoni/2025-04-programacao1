#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;
    int soma = 0;

    for (i = 0; i <= 14; i++){
        printf("Informe o numero %d: ", i);
        scanf("%d", &numeroUsuario);

        if (numeroUsuario % 2 == 0){
            soma = soma + numeroUsuario;
        }
    }

    printf("\nSoma dos pares: %d.\n", soma);
}
