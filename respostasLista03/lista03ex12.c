#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    char opcao;


    printf("Informe as tres notas do aluno: "); 
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Escolha o tipo de calculo (a para media aritmetica, h para media harmonica): ");
    scanf(" %c", &opcao);


    if (opcao == 'a' || opcao == 'A') {
        media = (nota1 + nota2 + nota3) / 3.0;
        printf("Media aritmetica: %.2f\n", media);
    } else if (opcao == 'h' || opcao == 'H') {
        media = 3.0 / ((1.0/nota1) + (1.0/nota2) + (1.0/nota3));
        printf("Media harmonica: %.2f\n", media);
    } else {
        printf("Tipo de média informada incorretamente. Cálculo não realizado");
    }

    return 0;
}
