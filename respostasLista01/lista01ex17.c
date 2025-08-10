#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float lado1, lado2, lado3;

    printf("Digite as coordenadas do primeiro vértice (x1 y1):\n");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo vértice (x2 y2):\n");
    scanf("%f %f", &x2, &y2);

    printf("Digite as coordenadas do terceiro vértice (x3 y3):\n");
    scanf("%f %f", &x3, &y3);

    lado1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    lado2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    lado3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

    printf("O comprimento do lado 1 é: %.2f\n", lado1);
    printf("O comprimento do lado 2 é: %.2f\n", lado2);
    printf("O comprimento do lado 3 é: %.2f\n", lado3);

    return 0;
}
