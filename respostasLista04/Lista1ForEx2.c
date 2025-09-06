#include <stdio.h>

int main(){
    int i;
    int ate;

    printf("Contar ate quanto: ");
    scanf("%d", &ate);

    for (i = 1; i <= ate; i++){
        printf("\n %d", i);
    }
}
