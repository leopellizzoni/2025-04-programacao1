#include <stdio.h>

int main(){
    int matricula = 0;
    float p1 = 0, p2 = 0, p3 = 0, recuperacao = 0;
    float media = 0;
    int qtdNotasRuins = 0;
    int podeCalcular = 1;
    int conceito = 0;

    do {
        podeCalcular = 1;
        recuperacao = 0;

        printf("Matricula: ");
        scanf("%d", &matricula);

        if (matricula == 0){
            break;
        }

        printf("Prova 1: ");
        scanf("%f", &p1);

        if (p1 <= 6){
            qtdNotasRuins++;
        }

        printf("Prova 2: ");
        scanf("%f", &p2);

        if (p2 <= 6){
            qtdNotasRuins++;
        }

        printf("Prova 3: ");
        scanf("%f", &p3);

        if (p3 <= 6){
            qtdNotasRuins++;
        }

        if (qtdNotasRuins == 1){
            printf("Prova RP: ");
            scanf("%f", &recuperacao);
        }
        else if (qtdNotasRuins > 1){
            printf("\nREPROVADO\n\n");
            podeCalcular = 0;
        }

        if (podeCalcular == 1){
            if (p1 < p2 && p1 < p3)
                if (p1 < recuperacao)
                    p1 = recuperacao;

            if (p2 < p1 && p2 < p3)
                if (p2 < recuperacao)
                    p2 = recuperacao;

            if (p3 < p1 && p3 < p2)
                if (p3 < recuperacao)
                    p3 = recuperacao;

            media = 3 / ((1 / p1) + (1 / p2) + (1 / p3));

            if (media >= 9) {
                conceito = 4;
            }
            else if (media >= 8){
                conceito = 3;
            }
            else if (media >= 7){
                conceito = 2;
            }
            else if (media >= 6){
                conceito = 1;
            }
            else {
                conceito = 0;
            }

            printf("Aluno Matricula: %d\n", matricula);
            printf("Media: %f\n", media);
            printf("Conceito: %d\n", conceito);
            printf("\n\n\n");
        }


    }while (matricula != 0);

}
