#include <stdio.h>

int main(){
    int dia, mes, ano, qtdMaxDiasParaMes;

    printf("Para qual ano voce gostaria de gerar os dias dos meses: ");
    scanf("%d", &ano);

    for (mes = 1; mes <= 12; mes++){
        printf("\n----------------------------\n");
        printf("MES: %d/%d\n", mes, ano);
        printf("----------------------------\n");
        qtdMaxDiasParaMes = 31; //Assume que sempre é 31.

        //Fevereiro
        if (mes == 2){
            //Controle para saber se é bissexto e temos que ir para 29 dias.
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                qtdMaxDiasParaMes = 29;
            }
            else {
                qtdMaxDiasParaMes = 28;
            }
        }

        //Abril, Junho, Setembro e Novembro
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            qtdMaxDiasParaMes = 30;
        }

        int qtdDiasImpressos = 0;
        for (dia = 1; dia <= qtdMaxDiasParaMes; dia++){
            if (qtdDiasImpressos == 7){//Imprimiu a semana toda
                printf("\n"); //quebra a linha
                qtdDiasImpressos = 0;
            }

            if (dia <= 9){
                printf(" 0%d ", dia);
            }
            else{
                printf(" %d ", dia);
            }

            qtdDiasImpressos++;
        }

        printf("\n----------------------------\n");
        printf("||||||||||||||||||||||||||||");
    }
}
