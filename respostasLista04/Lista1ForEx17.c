#include <stdio.h>

int main() {
    int valor, fatorial;

    printf("Digite 10 valores inteiros menores que 20:\n");

    //For para pedir as 10 vezes o numero
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor >= 20) {
            printf("Valor ignorado, pois e maior ou igual a 20.\n");
            continue;
        }

        fatorial = 1;

        //For para calcular o fatorial de 1 dos numeros pedidos.
        //Atenção as variaveis aqui. Nao sao iguais as do for que pede os numeros
        for (int j = 1; j <= valor; j++) {
            fatorial *= j;
        }

        printf("Fatorial de %d: %d\n", valor, fatorial);
    }
}
