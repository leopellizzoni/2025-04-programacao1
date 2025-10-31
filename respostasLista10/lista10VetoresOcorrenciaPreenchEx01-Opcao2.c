#include <stdio.h>

int main(){
    int i, j, iUnicos;
    int valores[20];
    int total;
    int valoresUnicos[20];
    int jaTem = 0;

    for (i = 0; i < 20; i++){
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

    printf("\nAqui esta a contagem \n");

    for (i = 0; i < iUnicos; i++){
        total = 0;
        for (j = 0; j < 20; j++){
            if (valores[j] == valoresUnicos[i]){
                total = total + 1;
            }
        }

        if (total > 0){
            printf("\nO numero %d aparece %d", valoresUnicos[i], total);
        }
    }

    return 0;
}