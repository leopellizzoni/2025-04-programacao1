#include <stdio.h>

int main() {
    int numero;
    int numeroResultado = 0;
    int temDigitoPar = 0;

    printf("Informe um numero inteiro ate 9 digitos: ");
    scanf("%lld", &numero);

    if (numero > 0) {
        while (numero > 0) {
            int digito = numero % 10;

            if (digito % 2 == 0) {
                //L�gica aqui: n�o somar os digitos.
                numeroResultado = numeroResultado * 10 + digito;
                temDigitoPar = 1;
            }

            numero = numero / 10;
        }

        if (numeroResultado == 0 && temDigitoPar == 0) {
            printf("O numero informado so possui digitos impares.\n");
        } else {
            printf("O numero resultante e: %lld\n", numeroResultado);
        }
    }
    else {
        printf("Numero invalido");
    }
}