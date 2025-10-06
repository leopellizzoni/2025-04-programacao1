#include <stdio.h>

int main() {
    long long int termo1 = 0, termo2 = 1, proximoTermo;
    int qtd = 0;

    printf("Os 10 primeiros termos da sequencia de Fibonacci que sao primos sao:\n");

    while(qtd <= 10) {
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;

        int i, primo = 1; //Assume que � primo inicialmente
        for(i = 2; i * i <= proximoTermo; i++) {
            if(proximoTermo % i == 0) {
                primo = 0; // Se for divis�vel por algum n�mero, n�o � primo
                break;
            }
        }

        if(primo == 1) {
            printf("%lld\n", proximoTermo);
            qtd++; //s� incrementa quando achar o numero fibonacci que seja tambm primo.
        }
    } 

    printf("\n");

    return 0;
}
