#include<stdio.h>

int main(){
    int contagemNotas[11]; //0 at� 10: 11 possibilidades
    int nota = 0, i;

    //Inicia todas as posicoes do vetor com zero.
    for(i = 0; i <= 10; i++){
        contagemNotas[i] = 0;
    }

    do{
        printf("Informe uma nota: ");
        scanf("%d", &nota);

        if (nota >= 0 && nota <= 10){
            //Assume que cada posicao do vetor guarda a quantidade de
            //Notas repetidas.
            contagemNotas[nota] = contagemNotas[nota] + 1;
        }
        else {
            printf("Por favor, notas entre 0 e 10\n");
        }
    }while (nota >= 0);

    for(i = 0; i<= 10; i++){
        if (contagemNotas[i] > 0){
            printf("\nNota %d: %d ocorrencia(s)", i, contagemNotas[i]);
        }
    }
    
    return 0;
}