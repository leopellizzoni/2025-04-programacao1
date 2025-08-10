#include <stdio.h>

int main() {
    int horas, minutos, segundos, tempo_total_em_segundos;

    // Solicitar ao usuário para inserir o tempo em horas, minutos e segundos
    printf("Digite o número de horas:\n");
    scanf("%d", &horas);

    printf("Digite o número de minutos:\n");
    scanf("%d", &minutos);

    printf("Digite o número de segundos:\n");
    scanf("%d", &segundos);

    // Converter tudo para segundos
    tempo_total_em_segundos = horas * 3600 + minutos * 60 + segundos;

    // Mostrar o resultado na tela
    printf("%d horas, %d minutos e %d segundos equivalem a %d segundos.\n", horas, minutos, segundos, tempo_total_em_segundos);

    return 0;
}
