#include <stdio.h>

int main(){
    int valores[10], valoresDiv[5];
    int cont, outroCont, achouDivisor;

    for(cont = 0; cont <= 9; cont++){
        printf("Informe o valor: ");
        scanf("%d", &valores[cont]);
    }

    for(cont = 0; cont <= 4; cont++){
        printf("Informe o valor para os divs: ");
        scanf("%d", &valoresDiv[cont]);
    }

    for (cont = 0; cont <= 9; cont++){
        printf("\nNumero %d", valores[cont]);
        achouDivisor = 0;//Assume que nao vai achar
        for(outroCont = 0; outroCont <= 4; outroCont++){
            if (valores[cont] % valoresDiv[outroCont] == 0){
                printf("\n    Divisivel por %d na posicao %d", valoresDiv[outroCont], outroCont);
                achouDivisor = 1; //informa que achou
            }
        }
        if (achouDivisor == 0){
            printf("\n    Nao e divisivel por nenhum numero do segundo vetor");
        }
    }
}
