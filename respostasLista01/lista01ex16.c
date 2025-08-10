#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, lado3, semiperimetro, area;

    printf("Digite o valor do primeiro lado do triângulo:\n");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado do triângulo:\n");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro lado do triângulo:\n");
    scanf("%f", &lado3);

    semiperimetro = (lado1 + lado2 + lado3) / 2;

    area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
