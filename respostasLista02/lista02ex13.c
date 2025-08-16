#include <stdio.h>

int main() {
    int codigo;
    float a, b, c, resultado;

    // Solicitar ao usuário que informe o código e os três valores
    printf("Digite o codigo (1 a 4): "); 
    scanf("%d", &codigo);

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Realizar a operação correspondente ao código
    if (codigo == 1) {
        resultado = a * b * c;
        printf("O resultado da multiplicacao dos tres valores e: %.2f\n", resultado);
    } else if (codigo == 2) {
        resultado = a + b + c;
        printf("O resultado da soma dos tres valores e: %.2f\n", resultado);
    } else if (codigo == 3) {
        resultado = a - b - c;
        printf("O resultado da subtracao dos tres valores e: %.2f\n", resultado);
    } else if (codigo == 4) {
        resultado = (a * a * a) + (b * b * b) + (c * c * c);
        printf("O resultado da soma do cubo dos tres valores e: %.2f\n", resultado);
    } else {
        printf("Codigo invalido. Por favor, digite um codigo de 1 a 4.\n");
    }

    return 0;
}
