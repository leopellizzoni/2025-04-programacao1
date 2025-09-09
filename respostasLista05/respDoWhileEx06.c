#include <stdio.h>

int main() {
    int num1, num2, resto, mdc, mmc;

    do {
        printf("Digite dois números naturais no intervalo de 1 a 500:\n");
        scanf("%d %d", &num1, &num2);

        if (num1 < 1 || num1 > 500 || num2 < 1 || num2 > 500) {
            printf("Os números devem estar no intervalo de 1 a 500. Tente novamente.\n");
        }
    } while (num1 < 1 || num1 > 500 || num2 < 1 || num2 > 500);


    int a = num1, b = num2;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    mdc = a;
    mmc = (num1 * num2) / mdc;
    printf("MMC(%d,%d) = %d\n", num1, num2, mmc);
}
