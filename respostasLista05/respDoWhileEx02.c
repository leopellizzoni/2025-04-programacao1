#include <stdio.h>

int main(){
    int cod1 = 0, cod2 = 0, votos1 = 0, votos2 = 0, codLido, votosLidos;

    do{
        printf("Cod Candidato: ");
        scanf("%d", &codLido);

        if (codLido != 0){
            printf("Votos Candidato %d: ", codLido);
            scanf("%d", &votosLidos);

            if (votosLidos > votos1){
                //Cenário onde o anterior primeiro colocado vira segundo
                //E o novo primeiro colocado é o que acabou de ser lido
                cod2 = cod1;
                votos2 = votos1;

                cod1 = codLido;
                votos1 = votosLidos;
            }
            else if (votosLidos > votos2){
                cod2 = codLido;
                votos2 = votosLidos;
            }
        }
    }
    while(codLido != 0);

    if (cod1 != 0){
        printf("\nCandidato Cod %d com %d Votos", cod1, votos1);
    }

    if (cod2 != 0){
        printf("\nCandidato Cod %d com %d Votos", cod2, votos2);
    }
    
    return 0;
}
