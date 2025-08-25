#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Informe os tres valores inteiros: "); 
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    //Verifica se os três valores podem ser os comprimentos dos lados de um triângulo
    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {        
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Os tres lados formam um triangulo equilatero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Os tres lados formam um triangulo isosceles.\n");
        } else {
            printf("Os tres lados formam um triangulo escaleno.\n");
        }
    } else {
        printf("Os tres lados nao formam um triangulo.\n");
    }

    return 0;
}
