#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    printf("Digite quatro números inteiros:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
 
    int maior, segundoMaior, terceiroMaior, menor;

    if (num1 >= num2 && num1 >= num3 && num1 >= num4)
        maior = num1;
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
        maior = num2;
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4)
        maior = num3;
    else
        maior = num4;

    if (num1 != maior && (num1 >= num2 && num1 >= num3 && num1 >= num4))
        segundoMaior = num1;
    else if (num2 != maior && (num2 >= num1 && num2 >= num3 && num2 >= num4))
        segundoMaior = num2;
    else if (num3 != maior && (num3 >= num1 && num3 >= num2 && num3 >= num4))
        segundoMaior = num3;
    else
        segundoMaior = num4;


    if (num1 != maior && num1 != segundoMaior)
        terceiroMaior = num1;
    else if (num2 != maior && num2 != segundoMaior)
        terceiroMaior = num2;
    else if (num3 != maior && num3 != segundoMaior)
        terceiroMaior = num3;
    else
        terceiroMaior = num4;


    if (num1 != maior && num1 != segundoMaior && num1 != terceiroMaior)
        menor = num1;
    else if (num2 != maior && num2 != segundoMaior && num2 != terceiroMaior)
        menor = num2;
    else if (num3 != maior && num3 != segundoMaior && num3 != terceiroMaior)
        menor = num3;
    else
        menor = num4;

    printf("Números em ordem decrescente: %d, %d, %d, %d\n", maior, segundoMaior, terceiroMaior, menor);

    return 0;
}
