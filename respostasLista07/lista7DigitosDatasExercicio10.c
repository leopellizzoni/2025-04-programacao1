#include <stdio.h>

int main() {
    int cpf;
    int d1, d2, d3, d4, d5, d6, d7, d8, d9;
    int primeiroDigitoVerificador, segundoDigitoVerificador;
    int soma, resto;

    printf("Informe os nove primeiros digitos do CPF: ");
    scanf("%d", &cpf);

    //Extrai cada d�gito individualmente
    d9 = cpf % 10;
    cpf = cpf / 10;
    d8 = cpf % 10;
    cpf = cpf / 10;
    d7 = cpf % 10;
    cpf = cpf / 10;
    d6 = cpf % 10;
    cpf = cpf / 10;
    d5 = cpf % 10;
    cpf = cpf / 10;
    d4 = cpf % 10;
    cpf = cpf / 10;
    d3 = cpf % 10;
    cpf = cpf / 10;
    d2 = cpf % 10;
    cpf = cpf / 10;
    d1 = cpf % 10;

    // Calcula o primeiro d�gito verificador
    soma = 10 * d1 + 9 * d2 + 8 * d3 + 7 * d4 + 6 * d5 + 5 * d6 + 4 * d7 + 3 * d8 + 2 * d9;
    resto = soma % 11;
    if (resto == 0 || resto == 1) {
        primeiroDigitoVerificador = 0;
    } else {
        primeiroDigitoVerificador = 11 - resto;
    }

    // Calcula o segundo d�gito verificador
    soma = 11 * d1 + 10 * d2 + 9 * d3 + 8 * d4 + 7 * d5 + 6 * d6 + 5 * d7 + 4 * d8 + 3 * d9 + 2 * primeiroDigitoVerificador;
    resto = soma % 11;
    if (resto == 0 || resto == 1) {
        segundoDigitoVerificador = 0;
    } else {
        segundoDigitoVerificador = 11 - resto;
    }


    printf("Os digitos verificadores sao: %d%d\n", primeiroDigitoVerificador, segundoDigitoVerificador);

    return 0;
}