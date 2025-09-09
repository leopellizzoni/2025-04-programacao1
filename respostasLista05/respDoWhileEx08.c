#include <stdio.h>

int main() {
    float valorPorHora;
    int entrada, saida, horasTrabalhadas = 0;

    printf("Informe o R$/hora: ");
    scanf("%f", &valorPorHora);

    float totalGanho = 0.0;

    for (int i = 1; i <= 22; i++) {
        printf("Dia %d - Hora de entrada e saida (apenas números inteiros, sem minutos): ", i);
        scanf("%d %d", &entrada, &saida);

        if (entrada <= saida) {
            horasTrabalhadas = saida - entrada;
        } else {
            horasTrabalhadas = 24 - entrada + saida;
        }

        if (horasTrabalhadas > 23) {
            horasTrabalhadas = 23;
        }

        totalGanho += horasTrabalhadas * valorPorHora;
    }

    printf("O trabalhador ganhou no mês: R$ %.2f\n", totalGanho);
}
