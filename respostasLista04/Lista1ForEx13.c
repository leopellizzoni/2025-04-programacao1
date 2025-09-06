#include <stdio.h>

int main(){
    int i;
    int numeroUsuario;
    int soma = 0;
    int qtd = 0;
    int media = 0;

    for (i = 0; i <= 14; i++){
        printf("Informe o numero %d: ", i);
        scanf("%d", &numeroUsuario);

        if (numeroUsuario % 2 != 0){
            soma = soma + numeroUsuario;
            qtd++;
        }
    }

    if (qtd > 0){
        media = soma / qtd;
        printf("\nMedia dos impares: %d.\n", soma);
    }
    else{
        printf("Nao houveram numeros impares");
    }
}
