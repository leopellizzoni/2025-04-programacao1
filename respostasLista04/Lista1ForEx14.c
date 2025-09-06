#include <stdio.h>

int main(){
    int i;

    int multiplicando = 0;
    int multiplicador = 0;

    int resultado = 0;

    printf("Informe o multiplicando:");
    scanf("%d", &multiplicando);

    printf("\nInforme o multiplicador:");
    scanf("%d", &multiplicador);
    printf("\n");

    for (i = 1; i <= multiplicador; i++){
        resultado = resultado + multiplicando;

        //Não era necessário fazer isso.
        //poderia ter sido apenas mostrado o resultado final
        printf("%d", multiplicando);
        if (i < multiplicador){
            printf(" + ");
        }
        else{
            printf(" = ");
        }
    }

    printf("%d", resultado);
    printf("\n");
}
