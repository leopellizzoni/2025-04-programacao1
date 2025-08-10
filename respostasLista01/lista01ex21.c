#include <stdio.h>

int main() {
    int horas, segundos;

    // Solicitar ao usuário para inserir o tempo em horas
    printf("Digite o tempo em horas:\n");
    scanf("%d", &horas);

    // Converter horas para segundos
    segundos = horas * 3600;

    // Mostrar o resultado na tela
    printf("%d horas equivalem a %d segundos.\n", horas, segundos);

    return 0;
}
