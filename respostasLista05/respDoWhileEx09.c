#include <stdio.h>

int main() {
    int matricula, entrada, saida, horasTrabalhadas;
    float valorPorHora, totalGanho;

    //While (1) é um loop infinito. Nunca vai parar até chamar o break;
    while (1) {
        printf("Informe a matricula do colaborador (ou 0 para encerrar): ");
        scanf("%d", &matricula);

        if (matricula == 0) {
            break;
        }

        printf("Informe o valor por hora que o trabalhador ganha: R$ ");
        scanf("%f", &valorPorHora);

        totalGanho = 0.0;

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

        printf("Matricula: %d\n", matricula);
        printf("O trabalhador ganhou no mes: R$ %.2f\n\n", totalGanho);
    }

    return 0;
}
