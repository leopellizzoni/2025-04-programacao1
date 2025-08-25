#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3); 

    int menor = num1;

    if (num2 < menor)
        menor = num2;

    if (num3 < menor)
        menor = num3;

    printf("Menor valor: %d\n", menor);

    return 0;
}
