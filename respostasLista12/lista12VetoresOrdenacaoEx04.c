#include <stdio.h>

int main() {
    int primos[100];
    int i, j, ehPrimo, numero = 2, contador, N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (N > 100) {
        printf("O valor de N deve ser no m�ximo 100.\n");
    }
    else {
        contador = 0;
        //Primeira parte do problema é gerar os numeros primos e armazenar no vetor
        //Estamos iniciando do 2 até N (que foi informado pelo usuario).
        //Naturalmente vai estar em ordem crescente
        while (contador < N) {
            ehPrimo = 1;

            for (i = 2; i <= numero / 2; i++) {
                if (numero % i == 0) {
                    ehPrimo = 0;
                    break;
                }
            }

            //Se for primo guarda no vetor e incrementa a posi��o
            if (ehPrimo == 1) {
                primos[contador] = numero;
                contador++;
            }

            //Vai para o proximo
            numero++;
        }

        printf("Os %d primeiros n�meros primos em ordem decrescente:\n", N);
        //Fazemos o for iniciar do final que � onde est� o �ltimo e maior
        for (i = N - 1; i >= 0; i--) {
            printf(" %d ", primos[i]);
        }
    }

    return 0;
}