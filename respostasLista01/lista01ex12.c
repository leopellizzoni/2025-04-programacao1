#include <stdio.h>

int main() {
    float raio, area;
    float pi = 3.14159;

    printf("Digite o valor do raio do círculo:\n");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
