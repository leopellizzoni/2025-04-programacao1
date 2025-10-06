#include <stdio.h>

int main(){
    int fatorialNumero, total = 1, cont;

    printf("O fatorial de qual numero voce deseja: ");
    scanf("%d", &fatorialNumero);

    //Observar a declaracao do for, inicia em 5 e faz menos 1 toda volta do la�o.
    for(cont = fatorialNumero; cont>0; cont--){
        printf("%d ", cont);

        if (cont > 1){
            printf(" x ");
        }

        total = total * cont;
    }

    printf(" = %d", total);
}