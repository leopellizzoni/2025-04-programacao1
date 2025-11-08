#include <stdio.h>

int main(){
    float valores[15];
    float valorEmTransicao;
    int contador, temp, rotacoes, outroContador;

    for (contador = 0; contador <= 14; contador++){
        printf("Informe o numero: ");
        scanf("%f", &valores[contador]);
    }

    printf("Elementos atuais: ");
    for (contador = 0; contador <= 14; contador++){
        printf(" %.2f ", valores[contador]);
    }

    printf("\n\nQuantas rotacoes voce quer fazer? ");
    scanf("%d", &rotacoes);

    //Atencao se comecar em 0 ir ate < rotacoes, caso contrario vai fazer 1 rotacao a mais
    //Aqui iniciou em 1 e foi ate <= numero de rotacoes escolhido.
    for(contador = 1; contador <= rotacoes; contador++){
        //guarda o primeiro valor em uma var temporaria
        valorEmTransicao = valores[0];

        //demais valores faz a troca.
        for (outroContador = 0; outroContador < 14; outroContador++){
            valores[outroContador] = valores[outroContador + 1];
        }

        //Coloca o valor guardado na ultima posicao
        valores[14] = valorEmTransicao;
    }

    printf("\nElementos do vetor depois da alteracao: ");
    for (contador = 0; contador <= 14; contador++){
        printf(" %.2f ", valores[contador]);
    }
}
