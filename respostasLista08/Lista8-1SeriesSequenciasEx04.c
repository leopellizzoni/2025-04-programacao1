#include <stdio.h>

int main() {
    int i;
    int numMin = 0;
    int numMax = 0;
    int temNumMin = 0;
    int temNumMax = 0;
    int ultimoNumeroLido = 0;
    int totalNumeros = 0;

    printf("Quantos numeros voce quer informar: ");
    scanf("%d", &totalNumeros);

    for (i = 1; i <= totalNumeros; i++){
        printf("Informe o numero %d: ", i);
        scanf("%d", &ultimoNumeroLido);
 
        //Nao tem numero menor definido
        if (temNumMin == 0){
            numMin = ultimoNumeroLido;
            temNumMin = 1; //define que agora tem (0 - nao tem e 1 tem)
            continue;
        }
        else if (numMin > ultimoNumeroLido){ //quebrou a sequencia
            if (!(temNumMax && temNumMin)){ //0 = Falso (False) e 1 = Verdadeiro (True) por isso nao foi colocado o operador == 1.
                temNumMin = 0;
                temNumMax = 0;
                continue;
            }
        }

        if (temNumMax == 0){ //quando nao tem numero maximo o primeiro � o maximo
            numMax = ultimoNumeroLido;
            temNumMax = 1;
            continue;
        }
        else if (numMax > ultimoNumeroLido){
            if (!(temNumMax && temNumMin)){
                temNumMin = 0;
                temNumMax = 0;
                continue;
            }
        }

        if ((temNumMin == 1) && (temNumMax == 1) && (numMax < ultimoNumeroLido)){
            numMax = ultimoNumeroLido;
        }
    }

    if (temNumMin == 1 && temNumMax == 1){
        printf("\nHouve sequencia. Primeiro numero foi %d e o ultimo foi %d\n", numMin, numMax);
    }
    else{
        printf("\nNao houve sequencia.\n");
    }
}