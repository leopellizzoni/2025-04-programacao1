#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;
    int qtdNumerosIntervalo = 0;

    for (i = 0; i <= 14; i++){
        printf("Informe o numero: ");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario >= 10 && numeroUsuario <= 20){
            qtdNumerosIntervalo++;
        }
    }

    printf("\nForam informados %d valores no intervalo especificado.\n", qtdNumerosIntervalo);
}
