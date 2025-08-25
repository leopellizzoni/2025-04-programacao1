#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Digite os tres valores inteiros representando os lados do triangulo:\n"); 
    scanf("%d %d %d", &lado1, &lado2, &lado3);


    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        // Verifica o tipo de triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Os lados formam um triangulo equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Os lados formam um triangulo isosceles.\n");
        } else {
            printf("Os lados formam um triangulo escaleno.\n");
        }

        
        if (lado1 * lado1 + lado2 * lado2 == lado3 * lado3 || lado1 * lado1 + lado3 * lado3 == lado2 * lado2 || lado2 * lado2 + lado3 * lado3 == lado1 * lado1) {
            printf("O triangulo e retangulo.\n");
        } else if (lado1 * lado1 + lado2 * lado2 < lado3 * lado3 || lado1 * lado1 + lado3 * lado3 < lado2 * lado2 || lado2 * lado2 + lado3 * lado3 < lado1 * lado1) {
            printf("O triangulo e obtusangulo.\n");
        } else {
            printf("O triangulo e acutangulo.\n");
        }
    } else {
        printf("Os lados informados nao formam um triangulo.\n");
    }

    return 0;
}
