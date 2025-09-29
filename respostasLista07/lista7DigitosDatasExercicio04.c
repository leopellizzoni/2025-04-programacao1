#include <stdio.h>

int main() {
    int numero;
    //uma variável para cada possível numero (de zero até 9)
    int frequencia_0 = 0, frequencia_1 = 0, frequencia_2 = 0, frequencia_3 = 0, frequencia_4 = 0,
        frequencia_5 = 0, frequencia_6 = 0, frequencia_7 = 0, frequencia_8 = 0, frequencia_9 = 0;

    printf("Informe um numero inteiro de no maximo 5 casas e nao maior que 99999: ");
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 99999) {
        while (numero > 0) {
            int digito = numero % 10;

            if (digito == 0) {
                frequencia_0++;
            } else if (digito == 1) {
                frequencia_1++;
            } else if (digito == 2) {
                frequencia_2++;
            } else if (digito == 3) {
                frequencia_3++;
            } else if (digito == 4) {
                frequencia_4++;
            } else if (digito == 5) {
                frequencia_5++;
            } else if (digito == 6) {
                frequencia_6++;
            } else if (digito == 7) {
                frequencia_7++;
            } else if (digito == 8) {
                frequencia_8++;
            } else if (digito == 9) {
                frequencia_9++;
            }
            numero = numero / 10;
        }

        printf("Frequencia de cada digito no numero:\n");

        if (frequencia_0 > 0) {
            printf("O digito 0 aparece %d vez no numero.\n", frequencia_0);
        }
        if (frequencia_1 > 0) {
            printf("O digito 1 aparece %d vez no numero.\n", frequencia_1);
        }
        if (frequencia_2 > 0) {
            printf("O digito 2 aparece %d vez no numero.\n", frequencia_2);
        }
        if (frequencia_3 > 0) {
            printf("O digito 3 aparece %d vez no numero.\n", frequencia_3);
        }
        if (frequencia_4 > 0) {
            printf("O digito 4 aparece %d vez no numero.\n", frequencia_4);
        }
        if (frequencia_5 > 0) {
            printf("O digito 5 aparece %d vez no numero.\n", frequencia_5);
        }
        if (frequencia_6 > 0) {
            printf("O digito 6 aparece %d vez no numero.\n", frequencia_6);
        }
        if (frequencia_7 > 0) {
            printf("O digito 7 aparece %d vez no numero.\n", frequencia_7);
        }
        if (frequencia_8 > 0) {
            printf("O digito 8 aparece %d vez no numero.\n", frequencia_8);
        }
        if (frequencia_9 > 0) {
            printf("O digito 9 aparece %d vez no numero.\n", frequencia_9);
        }
    }
    else{
        printf("Numero fora do intervalo permitido.\n");
    }
}
