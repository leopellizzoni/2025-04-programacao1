#include <stdio.h>

int main() {
    int numero, digito;
    int tempNumero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    tempNumero = numero;

    int repetido = 0;

    while (tempNumero > 0) {
        digito = tempNumero % 10;
        tempNumero = tempNumero / 10;

        int temp = tempNumero;
        while (temp > 0) {
            if (temp % 10 == digito) {
                repetido = 1; //Usa numero 1 como sendo o valor de verdadeiro para depois fazer o break do outro.
                break;
            }
            temp = temp / 10;
        }

        if (repetido == 1) {
            break;
        }
    }

    if (repetido) {
        printf("O numero contem digitos repetidos.\n");
    } else {
        printf("O numero nao contem digitos repetidos.\n");
    }

    return 0;
}