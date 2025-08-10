#include <stdio.h>

int main() {
    float base_maior, base_menor, altura, area;

    printf("Digite o valor da base maior do trapézio:\n");
    scanf("%f", &base_maior);

    printf("Digite o valor da base menor do trapézio:\n");
    scanf("%f", &base_menor);

    printf("Digite o valor da altura do trapézio:\n");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;

    printf("A área do trapézio é: %.2f\n", area);

    return 0;
}
