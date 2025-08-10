#include <stdio.h>
#include <math.h>

int main() {
    float litros_por_lata = 5;
    float preco_por_lata = 40;
    float cobertura_por_lata = 9;
    float pi = 3.1415;

    float altura, raio, area_total, cobertura_total;
    int latas_necessarias;
    float custo_total;

    printf("Digite a altura do cilindro (em metros):\n");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro (em metros):\n");
    scanf("%f", &raio);

    // Área total do cilindro (excluindo as bases)
    area_total = 2 * pi * raio * altura;

    // Área de uma base do cilindro
    float area_base = pi * raio * raio;

    // Área total a ser pintada (considerando duas mãos de tinta)
    cobertura_total = 2 * (area_total + 2 * area_base);

    // Calcula a quantidade de latas necessárias
    latas_necessarias = ceil(cobertura_total / cobertura_por_lata);

    // Calcula o custo total
    custo_total = latas_necessarias * preco_por_lata;

    printf("Quantidade de latas de tinta necessárias: %d\n", latas_necessarias);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}
