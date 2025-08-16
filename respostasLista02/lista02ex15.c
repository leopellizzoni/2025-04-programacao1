#include <stdio.h>

int main() {
    float primeiro_operando, segundo_operando, resultado;
    char operador;
    int podeCalcular = 1;

    printf("Digite o primeiro operando: "); 
    scanf("%f", &primeiro_operando);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo operando: ");
    scanf("%f", &segundo_operando);

    if ((operador == '/' && segundo_operando == 0) ) {
        printf("Divisao por Zero!\n");
        podeCalcular = 0;
    }

    if ((operador != '+' && operador != '-' && operador != '*' && operador != '/')){
        printf("Operador invalido!\n");
        podeCalcular = 0;
    }

    // Realizar a operação correspondente ao operador
    if (podeCalcular > 0 && operador == '+') {
        resultado = primeiro_operando + segundo_operando;
    } else if (podeCalcular > 0 && operador == '-') {
        resultado = primeiro_operando - segundo_operando;
    } else if (podeCalcular > 0 && operador == '*') {
        resultado = primeiro_operando * segundo_operando;
    } else if (podeCalcular > 0 && operador == '/') {
        resultado = primeiro_operando / segundo_operando;
    }

    if (podeCalcular > 0){
        printf("%.2f %c %.2f = %.2f\n", primeiro_operando, operador, segundo_operando, resultado);
    }


    return 0;
}
