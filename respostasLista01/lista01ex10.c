#include <stdio.h>

int main() {
    float lado1, lado2, area;

    printf("Digite o valor do primeiro lado do retângulo:\n");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado do retângulo:\n");
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}
