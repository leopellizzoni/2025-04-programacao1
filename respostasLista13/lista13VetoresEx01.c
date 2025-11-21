#include <stdio.h>

int main(){
    float diasMarco[31];
    float menor = 90, maior = -50, tempMedia = 0;
    int cont, totalDiasMenorMedia = 0;
	int diaMenor, diaMaior;
	
    for (cont = 0; cont <= 30; cont++){
        printf("Temperatura media para o dia %d/03: ", cont + 1);
        scanf("%f", &diasMarco[cont]);
        tempMedia = tempMedia + diasMarco[cont];

        if (diasMarco[cont] > maior){
            maior = diasMarco[cont];
			diaMaior = cont + 1;
        }
        if (diasMarco[cont] < menor){
            menor = diasMarco[cont];
			diaMenor = cont + 1;
        }
    }

    tempMedia = tempMedia / 31; //31 = total de dias em marco

    printf("\n\nTemperatura media de marco: %.2f", tempMedia);

    for(cont = 0; cont <= 30; cont++){
        if (diasMarco[cont] < tempMedia){
            totalDiasMenorMedia++;
            printf("\n    Dia %d menor que a media.", cont + 1); //Lembrar de fazer o +1 pois nosso mes come�a em 1 e n�o zero como o contador
        }
    }

    printf("\n\nTotal de dias a baixo da media: %d", totalDiasMenorMedia);
    printf("\nMenor temperatura: %.2f no dia %d", menor, diaMenor);
    printf("\nMaior temperatura: %.2f no dia %d", maior, diaMaior);
    printf("\n");
    
    return 0;
}
