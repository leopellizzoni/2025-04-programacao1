#include <stdio.h>

int main() {
    float aresta, area, volume;

    printf("Digite o comprimento da aresta do cubo:\n");
    scanf("%f", &aresta);

    area = 6 * aresta * aresta;
    volume = aresta * aresta * aresta;

    printf("A área do cubo é: %.2f\n", area);
    printf("O volume do cubo é: %.2f\n", volume);

    return 0;
}
