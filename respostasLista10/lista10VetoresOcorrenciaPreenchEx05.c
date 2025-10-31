#include <stdio.h>

int main(){
    int notas[25];
    int i, j, totalNotasLidas = 0;

    while (totalNotasLidas < 25){
        printf("Informe a nota %d: ", totalNotasLidas + 1);
        scanf("%d", &notas[totalNotasLidas]);

        if (notas[totalNotasLidas] >= 0 && notas[totalNotasLidas] <= 10){
            totalNotasLidas++; //S� incrementa o contador quando estiver dentro do intervalo aceito
        }
        else{
            printf("\nPor favor, informe a nota no intervalo de 0 ate 10");
        }
    }

    printf("\n");

    for (i = 0; i < 25; i++){
        printf(" %d ", notas[i]);
    }

    printf("\n  ");

    //Percore todas as possiveis notas e para cada uma das notas percore toda a lista de notas dos alunos
    for(i = 0; i <= 10; i++){
        printf("\n%d ", i);

        for(j = 0; j <= 25; j++){
            if (notas[j] == i){ //Compara a nota do aluno pelo vetor com o contador do primeiro for.
                printf("*");
            }
        }
    }
	
    return 0;
}