#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;
    int soma = 0;

    for (i = 0; i <= 14; i++){
        printf("Informe o numero %d: ", i);
        scanf("%d", &numeroUsuario);

        soma = soma + numeroUsuario;

    }

    printf("\nSoma de todos: %d.\n", soma);
}
