#include <stdio.h>

int main() {
    float lado1, lado2, lado3, semiperimetro;

    printf("Digite o valor do primeiro lado do triângulo:\n");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado do triângulo:\n");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro lado do triângulo:\n");
    scanf("%f", &lado3);

    semiperimetro = (lado1 + lado2 + lado3) / 2;

    printf("O semiperímetro do triângulo é: %.2f\n", semiperimetro);

    return 0;
}
