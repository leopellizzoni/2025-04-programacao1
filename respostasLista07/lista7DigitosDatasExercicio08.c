#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    //Numero decimal, cada digito estara no intervalo de 0 at� 9
    for (int i = 0; i <= 9; i++) {
        int temp = numero;
        int encontrado = 0;

        while (temp > 0) {
            int digito = temp % 10;
            if (digito == i) {
                encontrado = 1;
                break;
            }
            temp = temp / 10;
        }

        if (encontrado) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}