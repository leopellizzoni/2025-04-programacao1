#include <stdio.h>

int main() {
    int numero, digito, contador = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {

        digito = numero % 10;

        if (digito == 2) {
            contador++;
        }
 
        numero = numero / 10;
    }

    printf("O digito 2 ocorre %d vezes no numero.\n", contador);
}