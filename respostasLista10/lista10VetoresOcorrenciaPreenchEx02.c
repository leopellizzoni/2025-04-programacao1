#include <stdio.h>

int main(){
    int i, j, iUnicos;
    int valores[30];
    int total;
    int valoresUnicos[30];
    int jaTem = 0;
    int repeticaoTotal = -1, repeticaoPos = -1;

    for (i = 0; i < 30; i++){
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (i == 0){
            iUnicos = 0;
            valoresUnicos[iUnicos] = valores[i];
            iUnicos++;
        }
        else{
            jaTem = 0;
            for(j = 0; j < iUnicos; j++){
                if (valoresUnicos[j] == valores[i]){
                    jaTem = 1;
                    break;
                }
            }
            if (jaTem == 0){
                valoresUnicos[iUnicos] = valores[i];
                iUnicos++;
            }
        }
    }

    for (i = 0; i < iUnicos; i++){
        total = 0;
        for (j = 0; j < 30; j++){
            if (valores[j] == valoresUnicos[i]){
                total = total + 1;
            }
        }

        if (total > 0 && repeticaoTotal == -1){
            repeticaoTotal = total;
            repeticaoPos = i;
        }
        else if (total > 0 && total > repeticaoTotal){
            repeticaoTotal = total;
            repeticaoPos = i;
        }
    }

    printf("\nMais apareceu foi o %d em um total de %d vezes", valoresUnicos[repeticaoPos], repeticaoTotal);
    
    return 0;
}