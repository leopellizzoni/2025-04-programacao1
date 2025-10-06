#include <stdio.h>

int main() {
    int n = 90;

    //Atencao ao tipo de variavel usado
    long long int  a = 0, b = 1, proximo_termo;
    int i;

    printf("Os primeiros %d termos da sequ�ncia de Fibonacci sao:\n\n", n);

    printf("n(0) = 0\n");
    printf("n(1) = 1\n");

    for (i = 2; i <= n; i++) {
        proximo_termo = a + b;
        printf("n(%d) = %lld\n", i, proximo_termo);
        a = b;
        b = proximo_termo;
    }
 
    printf("\n");
    printf("\n");
}
