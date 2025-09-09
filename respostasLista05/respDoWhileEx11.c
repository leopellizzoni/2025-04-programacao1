#include <stdio.h>

int main() {
    char continuar;

    do {
        int matricula;
        float prova1, prova2, prova3, media;

        printf("Digite o numero da matricula do aluno: ");
        scanf("%d", &matricula);
        printf("Digite as tres notas do aluno: ");
        scanf("%f %f %f", &prova1, &prova2, &prova3);


        if (prova1 >= prova2 && prova1 >= prova3) {
            media = (prova1 * 4 + prova2 * 3 + prova3 * 3) / 10;
        } else if (prova2 >= prova1 && prova2 >= prova3) {
            media = (prova2 * 4 + prova1 * 3 + prova3 * 3) / 10;
        } else {
            media = (prova3 * 4 + prova1 * 3 + prova2 * 3) / 10;
        }


        printf("Matricula: %d\n", matricula);
        printf("Media: %.2f\n", media);
        if (media >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }

        printf("Deseja informar outro aluno? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

}
