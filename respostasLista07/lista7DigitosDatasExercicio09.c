#include <stdio.h>

int main() {
    int numero, digitoAnterior, digitoAtual;
    int ascendente = 1; //Partimos da ideia que o numero sera ascendente.

    printf("Informe um numero inteiro com pelo menos dois digitos: ");
    scanf("%d", &numero);

    digitoAnterior = numero % 10;
    numero = numero / 10;

    while (numero > 0) {
        // Pega o pr�ximo d�gito
        digitoAtual = numero % 10;
        numero = numero / 10;


        if (digitoAtual >= digitoAnterior) {
            ascendente = 0;
            break; //Importante chamar o break para parar tudo.
        }

        digitoAnterior = digitoAtual;
    }

    if (ascendente == 1) {
        printf("O numero e ascendente.\n");
    } else {
        printf("O numero nao e ascendente.\n");
    }
}