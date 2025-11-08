#include <stdio.h>

int main(){
    int valores[10];
    int contador = 0, temp;

    for (contador = 0; contador <= 9; contador++){
        printf("Informe o numero: ");
        scanf("%d", &valores[contador]);
    }


    printf("Elementos do vetor: ");
    for (contador = 0; contador <= 9; contador++){
        printf(" %d ", valores[contador]);
    }

    //Observar que o contador do final esta em contador+2 ao invés do contador++ usual.
    for(contador = 0; contador <= 9; contador = contador + 2){
        temp = valores[contador];
        valores[contador] = valores[contador + 1];
        valores[contador + 1] = temp;
    }

    printf("\nElementos do vetor depois da alteracao: ");
    for (contador = 0; contador <= 9; contador++){
        printf(" %d ", valores[contador]);
    }
}
