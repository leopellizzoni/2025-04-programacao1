#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Informe os coeficientes da equacao de segundo grau (a, b, c): "); 
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta >= 0) {
        // Calcula as raízes
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        if (x1 < x2)
            printf("Raizes da equacao em ordem crescente: %.2f, %.2f\n", x1, x2);
        else
            printf("Raizes da equacao em ordem crescente: %.2f, %.2f\n", x2, x1);
    } else {
        printf("A equacao nao possui raizes reais.\n");
    }

    return 0;
}
