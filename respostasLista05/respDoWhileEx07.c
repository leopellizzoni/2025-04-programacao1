#include <stdio.h>

int main() {
    int num, numIni = 2;

    printf("Digite um numero natural: ");
    scanf("%d", &num);

    printf("%d = ", num);

    while (num > 1) {
        if (num % numIni == 0) {
            printf("%d", numIni);
            num = num / numIni;

            if (num > 1)
                printf(" x ");
        } else {
            numIni++;
        }
    }

    printf("\n");

    return 0;
}
