#include <stdio.h>

int main(){
    int valores[10], valores2[10], total[20];
    int cont, contTotal;

    printf("Vamos preencher o primeiro vetor\n");
    for(cont = 0; cont <= 9; cont++){
        printf("V1) Informe o valor: ");
        scanf("%d", &valores[cont]);
    }

    printf("Vamos preencher o segundo vetor\n");
    for(cont = 0; cont <= 9; cont++){
        printf("V2) Informe o valor: ");
        scanf("%d", &valores2[cont]);
    }

    contTotal = 0;
    for(cont = 0; cont <= 9; cont++){
        total[contTotal] = valores[cont];
        contTotal++;
        total[contTotal] = valores2[cont];
        contTotal++;
    }

    printf("Aqui esta o vetor com o total dos elementos: \n");
    for(cont = 0; cont <= 19; cont++){
        printf(" %d ", total[cont]);
    }
}
