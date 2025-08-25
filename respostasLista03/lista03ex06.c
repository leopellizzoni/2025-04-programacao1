#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int maior1, maior2, maior3;

    // Solicita ao usuário para inserir os números 
    printf("Digite quatro números inteiros:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Inicializa os três maiores números com os primeiros números inseridos
    maior1 = num1;
    maior2 = num2;
    maior3 = num3;

    // Encontra o maior entre num1, num2 e num3
    if (maior2 > maior1) {
        int temp = maior1;
        maior1 = maior2;
        maior2 = temp;
    }
    if (maior3 > maior1) {
        int temp = maior1;
        maior1 = maior3;
        maior3 = temp;
    }
    if (maior3 > maior2) {
        int temp = maior2;
        maior2 = maior3;
        maior3 = temp;
    }

    // Atualiza os três maiores números, se necessário, considerando num4
    if (num4 > maior1) {
        maior3 = maior2;
        maior2 = maior1;
        maior1 = num4;
    } else if (num4 > maior2) {
        maior3 = maior2;
        maior2 = num4;
    } else if (num4 > maior3) {
        maior3 = num4;
    }

    // Exibe os três maiores valores em ordem crescente
    printf("Números em ordem crescente: %d, %d e %d\n", maior3, maior2, maior1);

    return 0;
}
