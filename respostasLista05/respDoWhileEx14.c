#include <stdio.h>

int main() {
    float saldo_inicial, saldo_atual;
    int meses = 0;


    printf("Digite o valor inicial aplicado: R$ ");
    scanf("%f", &saldo_inicial);

    saldo_atual = saldo_inicial;


    while (saldo_atual >= 200.0) {
        saldo_atual += saldo_atual * 0.05;
        saldo_atual -= 200.0;
        meses++;
    }

    printf("No %dº mes o saldo é de R$ %.2f.\n", meses, saldo_atual);
}
