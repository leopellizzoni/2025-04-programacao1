#include <stdio.h>

int main() {
    int dividendo, divisor, quociente = 0;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor (diferente de zero): ");
    scanf("%d", &divisor);

    if (divisor != 0) {
        while (dividendo >= divisor) {
            dividendo -= divisor;
            quociente++;
        }

        printf("Quociente: %d\n", quociente);
    }
    else {
        printf("Não podemos fazer essa conta");
    }
}
