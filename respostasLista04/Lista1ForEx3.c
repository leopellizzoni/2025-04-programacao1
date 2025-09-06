#include <stdio.h>

int main(){
    int i;

    printf("Mostrar os pares de 1 ate 50");

    for (i = 1; i <= 50; i++){
        if (i % 2 == 0){
            printf("\nPar: %d", i);
        }
    }
}
