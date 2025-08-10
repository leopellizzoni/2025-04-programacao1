#include <stdio.h>

int main() {
    int horas, minutos;

    // Solicitar ao usuário para inserir o tempo em horas
    printf("Digite o tempo em horas:\n");
    scanf("%d", &horas);

    // Converter horas para minutos
    minutos = horas * 60;

    // Mostrar o resultado na tela
    printf("%d horas equivalem a %d minutos.\n", horas, minutos);

    return 0;
}
