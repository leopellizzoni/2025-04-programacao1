#include <stdio.h>

int main(){
    int i;

    printf("Mostrar os impares de 1 ate 200");

    for (i = 1; i <= 200; i++){
        if (i % 2 != 0){
            printf("\nImpar: %d", i);
        }
    }
}
