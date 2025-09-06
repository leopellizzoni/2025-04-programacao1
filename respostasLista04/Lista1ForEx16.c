#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    printf("Informe um valor inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial de numeros negativos nao e definido.\n");
        return 1; // Encerra o programa com um código de erro
    }

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d e: %d\n", numero, fatorial);

}
