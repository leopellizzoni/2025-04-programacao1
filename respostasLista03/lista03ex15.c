#include <stdio.h>

int main() {
    int matricula;
    float prova1, prova2, prova3, prova4, media;

    // Solicitação do número da matrícula e das notas das provas
    printf("Informe o numero de matricula do aluno: "); 
    scanf("%d", &matricula);
    printf("Informe as quatro notas das provas: ");
    scanf("%f %f %f %f", &prova1, &prova2, &prova3, &prova4);

    // Encontra a menor nota entre as quatro
    float menorNota = prova1;
    if (prova2 < menorNota)
        menorNota = prova2;
    if (prova3 < menorNota)
        menorNota = prova3;
    if (prova4 < menorNota)
        menorNota = prova4;

    // Calcula a média considerando apenas as três melhores notas
    media = (prova1 + prova2 + prova3 + prova4 - menorNota) / 3.0;

    // Mostra o número da matrícula, média e se o aluno foi aprovado ou reprovado
    printf("\nNumero de Matricula: %d\n", matricula);
    printf("Media: %.2f\n", media);
    if (media >= 6.0)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
