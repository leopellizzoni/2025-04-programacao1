#include <stdio.h>

int main(){
    int cod1 = 0;
    int cod2 = 0;
    int votos1 = 0;
    int votos2 = 0;

    int leituraCod = -1;
    int leituraVotos = 0;


    do{
        printf("Cod Candidato: ");
        scanf("%d", &leituraCod);

        if (leituraCod != 0){
            printf("Votos Candidato %d: ", leituraCod);
            scanf("%d", &leituraVotos);

            if (leituraVotos > votos1){
                cod1 = leituraCod;
                votos1 = leituraVotos;
            }
            else if (leituraVotos > votos2){
                cod2 = leituraCod;
                votos2 = leituraVotos;
            }
        }
    }
    while(leituraCod != 0);

    if (cod1 != 0){
        printf("\nCandidato Cod %d com %d Votos", cod1, votos1);
    }

    if (cod2 != 0){
        printf("\nCandidato Cod %d com %d Votos", cod2, votos2);
    }
}
