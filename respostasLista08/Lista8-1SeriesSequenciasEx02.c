#include <stdio.h>

int main(){
    int cont, total, num, ultimoNum, seqEstritamenteDecresc = 1;

    printf("Quantos numeros voce quer informar: ");
    scanf("%d", &total);

    cont = 1;
    while(cont <= total){
        printf("%d/%d) Digite o numero: ", cont, total); 
        scanf("%d", &num);

        if ((cont > 1) && (num >= ultimoNum)) {
            seqEstritamenteDecresc = 0;
        }
        ultimoNum = num;
        cont++;
    }

    if(seqEstritamenteDecresc == 1){
        printf("Sequencia Estritamente Decrescente: SIM");
    }
    else{
         printf("Sequencia Estritamente Decrescente: NAO");
    }
}
