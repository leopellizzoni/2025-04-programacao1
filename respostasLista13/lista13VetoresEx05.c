#include <stdio.h>

int main() {
    int vetor1[10] = {-1};
    int vetor2[10] = {-1};
    int vetor3[20] = {-1};
    int contador, contadorAuxiliar, temp;

    //SUGESTAO: Depois que testar de forma decrescente faca um teste
    //nas 3 linhas onde tem o comentario //DICA:
    //Faça a alteração e veja o resultado. Lembre que você alterou apenas um operador o de menor (<) pelo de maior (>)

    printf("Vetor 1\n");
    for (contador = 0; contador <= 9; contador++) {
        printf("Vetor 1 | Numero %d: ", contador + 1);
        scanf("%d", &vetor1[contador]);
    }


    printf("Vetor 2\n");
    for (contador = 0; contador <= 9; contador++) {
        printf("Vetor 2 | Numero %d: ", contador + 1);
        scanf("%d", &vetor2[contador]);
    }

    for (contador = 0; contador < 9; contador++) {
        for (contadorAuxiliar = contador + 1; contadorAuxiliar < 10; contadorAuxiliar++) {
            if (vetor1[contador] < vetor1[contadorAuxiliar]) { //DICA: Altere essa linha para > ao invés de <
                temp = vetor1[contador];
                vetor1[contador] = vetor1[contadorAuxiliar];
                vetor1[contadorAuxiliar] = temp;
            }
        }
    }

    for (contador = 0; contador < 9; contador++) {
        for (contadorAuxiliar = contador + 1; contadorAuxiliar < 10; contadorAuxiliar++) {
            if (vetor2[contador] < vetor2[contadorAuxiliar]) { //DICA: Altere essa linha para > ao invés de <
                temp = vetor2[contador];
                vetor2[contador] = vetor2[contadorAuxiliar];
                vetor2[contadorAuxiliar] = temp;
            }
        }
    }

    for (contador = 0; contador <= 9; contador++) {
        vetor3[contador] = vetor1[contador];
    }

    //Atenção: o vetor2 é de 0 ate 9 e o vetor3 de 0 ate 19 no entanto do 0 ate o 9 já foi usado pelo vetor1
    //Agora precisar o vetor3 pegar do 10 até o 19 para preencher com os dados do vetor2.
    for (contador = 0; contador <= 9; contador++) {
        vetor3[contador + 10] = vetor2[contador];
    }

    for (contador = 0; contador < 19; contador++) {
        for (contadorAuxiliar = contador + 1; contadorAuxiliar < 20; contadorAuxiliar++) {
            if (vetor3[contador] < vetor3[contadorAuxiliar]) { //DICA: Altere essa linha para > ao invés de <
                temp = vetor3[contador];
                vetor3[contador] = vetor3[contadorAuxiliar];
                vetor3[contadorAuxiliar] = temp;
            }
        }
    }


    printf("Terceiro vetor em ordem decrescente:\n");

    for (contador = 0; contador < 20; contador++) {
        printf("%d ", vetor3[contador]);
    }

    printf("\n");

    return 0;
}
