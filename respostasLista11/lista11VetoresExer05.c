#include <stdio.h>

int main(){
    float valores[6];
    float maiorNumero = -1, valorEmTransicao;
    int contador, outroContador,  rotacoes;

    for(contador = 0; contador <= 5; contador++){
        printf("Digite o valor: ");
        scanf("%f", &valores[contador]);

        //Aproveitamos o mesmo for para ja guardar o maior numero para depois sabermos onde procurar
        //e de acordo com a posicao dele no vetor saberemos quantas vezes rotacionar
        if (valores[contador] > maiorNumero){
            maiorNumero = valores[contador];
        }
    }

    for (contador = 0; contador <= 5; contador++){
        if (valores[contador] == maiorNumero){
            rotacoes = contador;
            break; //Achamos o numero, nao precisamos ir ate o final do for.
        }
    }

    //Faz a rotacao. Mesma lógica do exercicio 4.
    for(contador = 1; contador <= rotacoes; contador++){
        valorEmTransicao = valores[0];

        //demais valores faz a troca.
        for (outroContador = 0; outroContador < 5; outroContador++){
            valores[outroContador] = valores[outroContador + 1];
        }

        //Coloca o valor guardado na ultima posicao
        valores[5] = valorEmTransicao;
    }


    for (contador = 0; contador <= 5; contador++){
        printf(" %.2f ", valores[contador]);
    }
}
