#include <stdio.h>

int main() {
    int primeiro_termo, ultimo_termo, razao, numero_termos, soma;

    printf("Digite o primeiro termo da progressão aritmética:\n");
    scanf("%d", &primeiro_termo);

    printf("Digite o último termo da progressão aritmética:\n");
    scanf("%d", &ultimo_termo);

    printf("Digite a razão da progressão aritmética:\n");
    scanf("%d", &razao);

    // Calcula o número de termos da PA
    numero_termos = (ultimo_termo - primeiro_termo) / razao + 1;

    // Calcula a soma dos termos da PA usando a fórmula
    soma = (primeiro_termo + ultimo_termo) * numero_termos / 2;

    printf("A soma dos termos da PA é: %d\n", soma);

    return 0;
}
