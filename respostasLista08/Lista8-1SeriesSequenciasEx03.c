#include <stdio.h>

int main() {
    int numeroAtual;
    int anterior;
    int i;
    int crescente = 1, decrescente = 1;
    int estritamenteCresc = 1, estritamenteDecr = 1;

    printf("Digite o primeiro numero: ");
    scanf("%d", &anterior);

    for (i = 2; i <= 10; i++) {
        printf("Digite o numero %d: ", i); 
        scanf("%d", &numeroAtual);

        if (numeroAtual < anterior) {
            crescente = 0;
        }

        if (numeroAtual > anterior) {
            decrescente = 0;
        }
        if (numeroAtual <= anterior) {
            estritamenteCresc = 0;
        }

        if (numeroAtual >= anterior){
            estritamenteDecr = 0;
        }

        anterior = numeroAtual;
    }

    if (estritamenteCresc == 1){
        printf("Estritamente Crescente");
    }
    else if (estritamenteDecr == 1){
        printf("Estritamente Decrescente");
    }
    else if (crescente == 1){
        printf("Crescente");
    }
    else if (decrescente == 1){
        printf("Decrescente");
    }
    else {
        printf("Desordenada");
    }
}
