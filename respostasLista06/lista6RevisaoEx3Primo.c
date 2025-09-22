#include <stdio.h>

int main(){
    int numero, cont, ehPrimo = 1;
    //atribuimos 1 para a variavel de controle do ehPrimo para considerar que o numero � primo.
    //Caso ele nao for ser� validado no for e voltamos ele para nao primo (atribuir 0);

    printf("Qual o numero que voce gostaria de validar: ");
    scanf("%d", &numero);

    for(cont = 2; cont < numero; cont++){
        if ((numero % cont) == 0){
            //nem precisa ir ate o final do loop.
            ehPrimo = 0;
            break;
        }
    }

    if (ehPrimo == 1){
        printf("\n\nO numero %d eh primo\n\n", numero);
    }
    else{
        printf("\n\nNao eh primo.\n\n");
    }
}