#include <stdio.h>

int main() {
    int d1, d2, d3, d4, d5;

    printf("Digite os 5 numeros:\n");
    scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5); 


    if (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5){
        printf("Todos os 5 iguais");
    }
    else if ((d1 == d2 && d2 == d3 && d3 == d4) || (d2 == d3 && d3 == d4 && d4 == d5) ||
        (d1 == d3 && d3 == d4 && d4 == d5) || (d1 == d2 && d2 == d4 && d4 == d5) ||
        (d1 == d2 && d2 == d3 && d3 == d5)) {
        printf("Quatro valores iguais e um diferente.\n");
    }
    else if ((d1 == d2 && d2 == d3 && d4 == d5) || (d1 == d2 && d3 == d4 && d4 == d5)) {
        printf("Os valores formam um full-hand.\n");
        return 0;
    }
    else if (d1 + 1 == d2 && d2 + 1 == d3 && d3 + 1 == d4 && d4 + 1 == d5){
        printf("Sequencia");
    }
    else {
        printf("Nenhuma combinacao");
    }



    return 0;
}
