#include <stdio.h>

int main() {
    int largura_caixa1, comprimento_caixa1, altura_caixa1;
    int largura_caixa2, comprimento_caixa2, altura_caixa2; 

    
    printf("Digite as dimensoes da primeira caixa (largura comprimento altura): ");
    scanf("%d %d %d", &largura_caixa1, &comprimento_caixa1, &altura_caixa1);

    
    printf("Digite as dimensoes da segunda caixa (largura comprimento altura): ");
    scanf("%d %d %d", &largura_caixa2, &comprimento_caixa2, &altura_caixa2);


    if (largura_caixa1 < largura_caixa2 && comprimento_caixa1 < comprimento_caixa2 && altura_caixa1 < altura_caixa2) {
        printf("A primeira caixa pode ser colocada dentro da segunda caixa.\n");
    } else {
        printf("A primeira caixa NAO pode ser colocada dentro da segunda caixa.\n");
    }

    return 0;
}
