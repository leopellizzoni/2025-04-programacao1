#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;
    int qtdNumerosIntervalo1 = 0;
    int qtdNumerosIntervalo2 = 0;
    int qtdNumerosIntervalo3 = 0;
    int qtdNumerosIntervalo4 = 0;

    for (i = 0; i <= 14; i++){
        printf("Informe o numero: ");
        scanf("%d", &numeroUsuario);

        if (numeroUsuario >= 0 && numeroUsuario <= 25){
            qtdNumerosIntervalo1++;
        }
        else if (numeroUsuario >= 26 && numeroUsuario <= 50){
            qtdNumerosIntervalo2++;
        }
        else if (numeroUsuario >= 51 && numeroUsuario <= 75){
            qtdNumerosIntervalo3++;
        }
        else if (numeroUsuario >= 76 && numeroUsuario <= 100){
            qtdNumerosIntervalo4++;
        }
    }

    printf("\nForam informados %d valores no intervalo [0-25].\n", qtdNumerosIntervalo1);
    printf("\nForam informados %d valores no intervalo [26-50].\n", qtdNumerosIntervalo2);
    printf("\nForam informados %d valores no intervalo [51-75].\n", qtdNumerosIntervalo3);
    printf("\nForam informados %d valores no intervalo [76-100].\n", qtdNumerosIntervalo4);
}
