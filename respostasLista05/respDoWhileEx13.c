#include <stdio.h>

int main() {
    int codigo;
    float quantidade, preco_unitario, valor_total = 0, desconto, acrescimo_30d, acrescimo_60d;


    do {
        printf("Digite o codigo do produto (0 para parar): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;
        }


        if (codigo == 101) {
            preco_unitario = 32.0;
        } else if (codigo == 102) {
            preco_unitario = 23.0;
        } else if (codigo == 103) {
            preco_unitario = 12.0;
        }  else if (codigo == 104) {
            preco_unitario = 20.50;
        }  else if (codigo == 105) {
            preco_unitario = 26.70;
        } else {
            printf("Codigo de produto invalido.\n");
            continue;
        }


        printf("Digite a quantidade comprada: ");
        scanf("%f", &quantidade);

        valor_total += preco_unitario * quantidade;

    } while (codigo != 0);

    desconto = valor_total * 0.10;
    acrescimo_30d = valor_total * 0.05;
    acrescimo_60d = valor_total * 0.10;

    printf("\nValor total dos produtos: R$ %.2f\n", valor_total);
    printf("Valor da compra a vista (com 10%% de desconto): R$ %.2f\n", valor_total - desconto);
    printf("Valor para 30 dias (com 5%% de acréscimo): R$ %.2f\n", valor_total + acrescimo_30d);
    printf("Valor para 60 dias (com 10%% de acréscimo): R$ %.2f\n", valor_total + acrescimo_60d);


}
