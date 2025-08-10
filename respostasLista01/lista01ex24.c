#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;

    // Solicitar ao usuário para inserir o tempo em segundos
    printf("Digite o tempo em segundos:\n");
    scanf("%d", &segundos);

    // Converter segundos para horas
    horas = segundos / 3600;
    // Calcular o restante de segundos após a conversão para horas
    resto = segundos % 3600;

    // Converter o restante de segundos para minutos
    minutos = resto / 60;

    // Mostrar o resultado na tela
    printf("%d segundos equivalem a %d horas e %d minutos.\n", segundos, horas, minutos);

    return 0;
}
