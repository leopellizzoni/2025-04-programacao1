#include <stdio.h>

int main() {
    float valor_inicial, valor_final;
    float taxa_juros = 0.005;
    int anos = 0, meses = 0;

    printf("Digite o valor inicial aplicado: R$ ");
    scanf("%f", &valor_inicial);
    printf("Digite o valor final desejado: R$ ");
    scanf("%f", &valor_final);

    while (valor_inicial < valor_final) {
        valor_inicial += valor_inicial * taxa_juros;
        meses++;
        if (meses == 12) {
            anos++;
            meses = 0;
        }
    }

    printf("Para atingir o valor de R$ %.2f, você precisa deixar o dinheiro aplicado por:\n", valor_final);
    printf("%d anos e %d meses.\n", anos, meses);
}
