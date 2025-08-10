#include <stdio.h>

int main() {
    int lado, area;

    printf("Digite o valor do lado do quadrado:\n");
    scanf("%d", &lado);

    area = lado * lado;

    printf("A área do quadrado é: %d\n", area);

    return 0;
}
