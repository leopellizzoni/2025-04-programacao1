#include <stdio.h>

int main() {
    int codigo_curso, idade, contador_engenharia = 0, contador_computacao = 0, contador_administracao = 0;
    int total_alunos = 15;
    int soma_idade_engenharia = 0, soma_idade_computacao = 0, soma_idade_administracao = 0;
    int alunos_20_25 = 0;

    for (int i = 0; i < total_alunos; i++) {
        printf("Informe o codigo do curso (1: engenharia; 2: computacao; 3: administracao) do aluno %d: ", i + 1);
        scanf("%d", &codigo_curso);

        printf("Informe a idade do aluno %d: ", i + 1);
        scanf("%d", &idade);

        if (idade >= 20 && idade <= 25) {
            alunos_20_25 = alunos_20_25 + 1;
        }

        if (codigo_curso == 1) {
            contador_engenharia++;
            soma_idade_engenharia += idade;
        } else if (codigo_curso == 2) {
            contador_computacao++;
            soma_idade_computacao += idade;
        } else if (codigo_curso == 3) {
            contador_administracao++;
            soma_idade_administracao += idade;
        } else {
            printf("Codigo de curso invalido.\n");
            continue;
        }
    }

    printf("\nNumero de alunos por curso:\n");
    printf("Engenharia: %d\n", contador_engenharia);
    printf("Computacao: %d\n", contador_computacao);
    printf("Administracao: %d\n", contador_administracao);

    float media_idade_engenharia = soma_idade_engenharia / (float)contador_engenharia;
    float media_idade_computacao = soma_idade_computacao / (float)contador_computacao;
    float media_idade_administracao = soma_idade_administracao / (float)contador_administracao;

    printf("\nMedia de idade por curso:\n");
    printf("Engenharia: %.2f\n", media_idade_engenharia);
    printf("Computacao: %.2f\n", media_idade_computacao);
    printf("Administracao: %.2f\n", media_idade_administracao);

    printf("\nNumero de alunos com idade entre 20 e 25 anos: %d\n", alunos_20_25);

    if (media_idade_engenharia <= media_idade_computacao && media_idade_engenharia <= media_idade_administracao) {
        printf("\nO curso com a menor media de idade e Engenharia.\n");
    } else if (media_idade_computacao <= media_idade_engenharia && media_idade_computacao <= media_idade_administracao) {
        printf("\nO curso com a menor media de idade e Computacao.\n");
    } else {
        printf("\nO curso com a menor media de idade e Administracao.\n");
    }


}
