#include <stdio.h>

int main() {
    int matricula;
    float prova1, prova2, prova3, recup, media;

    printf("Informe o numero de matricula do aluno: ");
    scanf("%d", &matricula); 
    printf("Informe as tres notas das provas: ");
    scanf("%f %f %f", &prova1, &prova2, &prova3);

    if (prova1 == 0 || prova2 == 0 || prova3 == 0) {
        media = 0;
    } else {
        media = 3 / ((1/prova1) + (1/prova2) + (1/prova3));
    }


    if (media < 6.0) {
        printf("Informe a nota da prova de recuperacao: ");
        scanf("%f", &recup);


        float minNota = prova1;
        if (prova2 < minNota)
            minNota = prova2;
        if (prova3 < minNota)
            minNota = prova3;

        float novaMedia;
		if (prova1 == minNota)
			novaMedia = 3 / ((1/10.0) + (1/prova2) + (1/prova3));
		else if (prova2 == minNota)
			novaMedia = 3 / ((1/prova1) + (1/10.0) + (1/prova3));
		else
			novaMedia = 3 / ((1/prova1) + (1/prova2) + (1/10.0));


        if (novaMedia >= 6.0) {
            media = novaMedia;            
            if (prova1 == minNota)
                prova1 = recup;
            else if (prova2 == minNota)
                prova2 = recup;
            else
                prova3 = recup;
        }
    }

    printf("\nNumero de Matricula: %d\n", matricula);
    printf("Media final: %.2f\n", media);
    if (media >= 9.0)
        printf("Conceito: 4\n");
    else if (media >= 8.0)
        printf("Conceito: 3\n");
    else if (media >= 7.0)
        printf("Conceito: 2\n");
    else if (media >= 6.0)
        printf("Conceito: 1\n");
    else
        printf("Conceito: 0\n");

    return 0;
}
