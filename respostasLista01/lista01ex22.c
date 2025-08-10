#include <stdio.h>

int main() {
    int minutos;
    float horas;

    // Solicitar ao usuário para inserir o tempo em minutos
    printf("Digite o tempo em minutos:\n");
    scanf("%d", &minutos);

    // Converter minutos para horas
    horas = minutos / 60.0;

    // Mostrar o resultado na tela
    printf("%d minutos equivalem a %.2f horas.\n", minutos, horas);

    return 0;
}
