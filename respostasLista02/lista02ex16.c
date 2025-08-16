#include <stdio.h>

int main() {
    int numero, digito1, digito2, soma, quadrado_soma;

    // Solicitar ao usuário que informe um número de quatro dígitos
    printf("Digite um numero inteiro de quatro digitos: ");
    scanf("%d", &numero);
 
    // Extrair os dígitos do número
    digito1 = numero / 100;    // Primeiros dois dígitos
    digito2 = numero % 100;    // Últimos dois dígitos

    // Calcular a soma dos dígitos
    soma = digito1 + digito2;

    // Calcular o quadrado da soma
    quadrado_soma = soma * soma;

    // Verificar se o quadrado da soma é igual ao número original
    if (quadrado_soma == numero) {
        printf("O numero %d possui a caracteristica 30+25=55 e 552=3025.\n", numero);
    } else {
        printf("O numero %d nao possui a caracteristica desejada.\n", numero);
    }

    return 0;
}
