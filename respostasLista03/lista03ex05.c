#include <stdio.h>

int main() {
    int i;
    float a, b, c;

    printf("Digite quatro valores (i, a, b, c): ");
    scanf("%d %f %f %f", &i, &a, &b, &c);
 
    if (i == 1) {
        // Mostrar os valores a, b, c em ordem crescente
        if (a > b) {
            float temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            float temp = b;
            b = c;
            c = temp;
        }
        if (a > b) {
            float temp = a;
            a = b;
            b = temp;
        }
        printf("Valores em ordem crescente: %.2f, %.2f, %.2f\n", a, b, c);
    } else if (i == 2) {
        // Mostrar os valores a, b, c em ordem decrescente
        if (a < b) {
            float temp = a;
            a = b;
            b = temp;
        }
        if (b < c) {
            float temp = b;
            b = c;
            c = temp;
        }
        if (a < b) {
            float temp = a;
            a = b;
            b = temp;
        }
        printf("Valores em ordem decrescente: %.2f, %.2f, %.2f\n", a, b, c);
    } else if (i == 3) {
        // Mostrar os valores de forma que o maior valor entre a, b, c fique entre os outros dois
        if (a < b && a < c) {
            printf("Valores: %.2f, %.2f, %.2f\n", b, c, a);
        } else if (b < a && b < c) {
            printf("Valores: %.2f, %.2f, %.2f\n", a, c, b);
        } else {
            printf("Valores: %.2f, %.2f, %.2f\n", a, b, c);
        }
    } else {
        printf("Valor de i inválido.\n");
    }

    return 0;
}
