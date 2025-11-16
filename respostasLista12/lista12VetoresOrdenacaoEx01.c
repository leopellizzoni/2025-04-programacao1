#include <stdio.h>

int main(){
    int valores[10];
    int i, temp;

    for(i = 0; i <= 9; i++){
        printf("Digite um numero: ");
        scanf("%d", valores[i]);
    }
    

    for(i = 0; i < 9; i++){
        if (valores[i] > valores[i + 1]){
            temp = valores[i];
            valores[i] = valores[i + 1];
            valores[i + 1] = temp;
        }
    }

    printf("Vetor: \n");

    for (i = 0; i<= 9; i++){
        printf(" %d ", valores[i]);
    }

    return 0;
}
