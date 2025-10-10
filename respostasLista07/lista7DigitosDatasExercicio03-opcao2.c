#include <stdio.h>

int main() {
    int numero, digito;
    int tempNumero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    tempNumero = numero;

    //Variável flag de controle. Usa numero 1 como sendo o valor de verdadeiro e 0 como falso
    int temNumeroRepetido = 0;

    /*
        Na opcao1 foi verificado todas as possibilidades numéricas (de 0 até 9) para cada dígito do número informado, 
        mesmo que não esteja presente. 
        Esta resposta otimiza esse aspecto e verifica apenas dígitos do próprio número se estão repetidos.
    */

    while (tempNumero > 0) {
        digito = tempNumero % 10;
        tempNumero = tempNumero / 10;

        int temp = tempNumero;
        while (temp > 0) {
            if (temp % 10 == digito) {
                temNumeroRepetido = 1;
                //Uma vez que já descobriu que tem algum numero repetido, não precisa continuar... por isso o break
                break;
            }
            temp = temp / 10;
        }

        //Esse controle se faz necessário para sair do loop externo também
        if (temNumeroRepetido == 1) {
            break;
        }
    }

    if (temNumeroRepetido == 1) {
        printf("O numero contem digitos repetidos.\n");
    } else {
        printf("O numero nao contem digitos repetidos.\n");
    }

    return 0;
}