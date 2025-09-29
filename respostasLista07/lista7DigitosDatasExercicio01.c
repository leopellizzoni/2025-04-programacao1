#include <stdio.h>

int main() {
    int numero, digito;

    // Solicita ao usuario informar um n�mero inteiro
    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    // Mostra os digitos do numero na ordem contraria
    printf("Os digitos do numero na ordem contraria sao: ");

    while (numero > 0) {

        // Obtem o ultimo digito do numero
        digito = numero % 10;

        // Mostra o d�gito
        printf("%d", digito);

        // Remove o ultimo digito do numero
        numero = numero / 10;

        // Adiciona uma virgula entre os digitos, exceto no ultimo
        if (numero > 0) {
            printf(",");
        }
    }

    printf("\n");
}
