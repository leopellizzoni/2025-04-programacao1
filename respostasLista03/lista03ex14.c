#include <stdio.h>

int main() {
    int matricula;
    float prova1, prova2, prova3, media;

    // Solicitação do número da matrícula e das notas das provas
    printf("Informe o numero de matricula do aluno: ");
    scanf("%d", &matricula); 
    printf("Informe as tres notas das provas: ");
    scanf("%f %f %f", &prova1, &prova2, &prova3);

    // Calcula a média ponderada
    float maiorNota = prova1;
    if (prova2 > maiorNota)
        maiorNota = prova2;
    if (prova3 > maiorNota)
        maiorNota = prova3;

    media = (maiorNota * 4 + (prova1 + prova2 + prova3 - maiorNota) * 3) / 10.0;

    // Mostra o número da matrícula, média e se o aluno foi aprovado ou reprovado
    printf("\nNumero de Matricula: %d\n", matricula);
    printf("Media: %.2f\n", media);
    if (media >= 6.0)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
