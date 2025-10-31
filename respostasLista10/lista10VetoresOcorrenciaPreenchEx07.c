#include<stdio.h>

int main(){
    int numeros[10];
    int i, num;

    //Importante: lembrar que a primeira posicao do vetor � 0 (zero)
    //Cada posicao foi usada como uma variavel de sim/n�o por numero

    //assume que nenhuma foi digitada.
    //0 = numero nao digitado
    //1 = numero foi digitado
    for(i = 0; i < 10; i++){
        numeros[i] = 0;
    }

    do{
        printf("Informe um numero: ");
        scanf("%d", &num);

        if (num >= 1 && num <= 10){
            numeros[num - 1] = 1; //Sinaliza que foi digitado.
        }
        else if (num != 0) {
            printf("Por favor, numeros entre 1 e 10\n");
        }
    }while (num != 0);

    printf("\nNumeros n�o digitados: ");

    for(i = 1; i<= 10; i++){
        if (numeros[i - 1] == 0){
            printf(" %d ", i);
        }
    }
    
    return 0;
}