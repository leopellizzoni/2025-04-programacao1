#include <stdio.h>

int main(){
    int valores[10];
    int i = 0, outroContador;

    //Primeiro laço para ler os valores.
    //Poderia ter sido feito com o for também.
    while (i <= 9){
        printf("Informe o valor: ");
        scanf("%d", &valores[i]);
        i++;
    }

    printf("\nResultado\n");

    outroContador = 9;// Fazemos isso para iniciar do final

    for(i = 0; i <= 9; i++){
        printf("%d - %d\n", valores[i], valores[outroContador]);

        //Precisamos fazer o menos menos para que o contador se ajuste.
        //No contador do i o for esta fazendo para nos.
        outroContador--;
    }

}
