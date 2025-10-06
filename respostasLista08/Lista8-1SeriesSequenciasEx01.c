#include <stdio.h>

int main(){
    int cont, total, num = 0, ultimoNum = -1, seqEstritamenteCresc = 1;

    printf("Quantos numeros voce quer informar: ");
    scanf("%d", &total);

    cont = 1;
    while(cont <= total){
        printf("%d/%d) Digite o numero: ", cont, total); 
        scanf("%d", &num);

        if (num <= ultimoNum){
            seqEstritamenteCresc = 0;
        }
        ultimoNum = num;
        cont++;
    }

    if(seqEstritamenteCresc == 1){
        printf("Sequencia Estritamente Crescente: SIM");
    }
    else{
         printf("Sequencia Estritamente Crescente: NAO");
    }

}
