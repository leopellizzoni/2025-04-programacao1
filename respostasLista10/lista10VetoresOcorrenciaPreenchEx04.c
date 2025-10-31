#include <stdio.h>

int main(){
    int i, j;
    int valores[30];
    int total;

    i = 0;

    while (i <= 29){
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (valores[i] >= 1 && valores[i] <= 10){
            i++;
        }
        else{
            printf("\nNumero Invalido. Precisa ser de 1 ate 10.");
        }
    }

    printf("\nAqui esta a contagem \n");

    for (i = 1; i <= 10; i++){
        total = 0;
        for (j = 0; j < 30; j++){
            if (valores[j] == i){
                total = total + 1;
            }
        }

        if (total > 0){
            printf("\nO numero %d aparece %d", i, total);
        }
    }
    
    return 0;
}