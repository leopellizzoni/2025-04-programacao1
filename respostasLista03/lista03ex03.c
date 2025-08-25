#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3); 

    // Ordenando os números em ordem crescente
    int temp;
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Números em ordem crescente: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
