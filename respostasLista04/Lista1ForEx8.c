#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;

    for (i = 0; i <= 0; i--){
        printf("Informe o numero: ");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario < 0){
            break;
        }
        else if (numeroUsuario % 2 == 0){
            printf("\nNumero par\n");
        }
    }
}
