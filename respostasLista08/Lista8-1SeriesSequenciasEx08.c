#include <stdio.h>

int main() {
    int termo = 1;
    int soma = 0;

    for (int i = 0; i < 100; i++) {
        soma += termo;
        termo += 2;
    }

    printf("A soma dos 100 primeiros termos da sequencia e: %d\n", soma);
}