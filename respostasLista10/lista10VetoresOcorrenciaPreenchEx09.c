#include<stdio.h>

int main(){
    int valores[10];
    int i = 0;

    do {
        printf("Informe o numero %d/10: ", i +1);
        scanf("%d", &valores[i]);

        if (valores[i] > 0){
            i++;
        }
        else{
            printf("    Numero nao registrado\n");
        }

    }while(i < 10);

    printf("\n\nNumeros positivos em orgem invertida no vetor: ");

    for (i = 9; i >= 0; i--){
        printf(" %d ", valores[i]);
    }

    return 0;
}