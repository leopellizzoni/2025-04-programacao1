#include <stdio.h>

int main() {
    float n1, n2, n3, exercicios, media;
    int matricula;


    printf("Informe as tres notas das provas:\n"); 
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Informe a nota dos exercicios: ");
    scanf("%f", &exercicios);
    printf("Informe o numero de matricula do aluno: ");
    scanf("%d", &matricula);


    media = (n1 + 2 * n2 + 3 * n3 + 4 * exercicios) / 10.0;

    
    printf("\nNumero de Matricula: %d\n", matricula);
    printf("Notas:\n");
    printf("Prova 1: %.2f\n", n1);
    printf("Prova 2: %.2f\n", n2);
    printf("Prova 3: %.2f\n", n3);
    printf("Exercicios: %.2f\n", exercicios);
    printf("Media: %.2f\n", media);

    
    char conceito;
    if (media >= 7.0)
        conceito = 'A';
    else if (media >= 5.0)
        conceito = 'B';
    else if (media >= 3.0)
        conceito = 'C';
    else
        conceito = 'F'; 

    
    printf("Conceito: %c\n", conceito);
    if (conceito != 'F')
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
