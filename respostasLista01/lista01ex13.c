#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite o valor da base do triângulo:\n");
    scanf("%f", &base);

    printf("Digite o valor da altura do triângulo:\n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
