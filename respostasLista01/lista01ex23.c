#include <stdio.h>

int main() {
    int segundos;
    float horas;

    // Solicitar ao usuário para inserir o tempo em segundos
    printf("Digite o tempo em segundos:\n");
    scanf("%d", &segundos);

    // Converter segundos para horas
    horas = segundos / 3600.0;

    // Mostrar o resultado na tela
    printf("%d segundos equivalem a %.2f horas.\n", segundos, horas);

    return 0;
}
