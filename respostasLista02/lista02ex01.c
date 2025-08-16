#include <stdio.h>

int main() {
    int idade;

    // Solicitar ao usuário que digite a idade
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Verificar se a pessoa é maior ou menor de idade
    if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa é menor de idade.\n");
    }

    return 0;
}
 