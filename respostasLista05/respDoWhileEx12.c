#include <stdio.h>

int main() {
    char continuar;

    do {
        int codigo;
        float salario_fixo, total_vendas, comissao, salario_total;

        printf("Digite o codigo do vendedor: ");
        scanf("%d", &codigo);
        printf("Digite o salario fixo do vendedor: ");
        scanf("%f", &salario_fixo);
        printf("Digite o total de vendas do vendedor: ");
        scanf("%f", &total_vendas);

        if (total_vendas <= 100000) {
            comissao = total_vendas * 0.01;
        } else {
            comissao = 100000 * 0.01 + (total_vendas - 100000) * 0.03;
        }

        salario_total = salario_fixo + comissao;

        printf("Codigo do vendedor: %d\n", codigo);
        printf("Total de vendas: R$ %.2f\n", total_vendas);
        printf("Salario fixo: R$ %.2f\n", salario_fixo);
        printf("Salario total: R$ %.2f\n", salario_total);

        printf("Deseja informar outro numero? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

}
