#include<stdio.h>

int main(){
    int valores[20];
    int i = 0;

    do {
        printf("Informe o numero %d/20: ", i +1);
        scanf("%d", &valores[i]);

        if (valores[i] % 2 != 0){
            i++;
        }
        else{
            printf("    Numero nao registrado\n");
        }

    }while(i < 20);

    printf("\n\nNumeros impares no vetor: ");

    for (i = 0; i <= 19; i++){
        printf(" %d ", valores[i]);
    }
    
    return 0;
}