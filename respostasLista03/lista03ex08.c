#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, num6;
	
    printf("Digite seis números inteiros:\n");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6); 

    int soma = 0;

    if (num1 % 2 == 0)
        soma = soma + num1;
    if (num2 % 2 == 0)
        soma = soma + num2;
    if (num3 % 2 == 0)
        soma = soma + num3;
    if (num4 % 2 == 0)
        soma = soma + num4;
    if (num5 % 2 == 0)
        soma = soma + num5;
    if (num6 % 2 == 0)
        soma = soma + num6;

    printf("A soma dos números pares digitados é %d.\n", soma);

    return 0;
}