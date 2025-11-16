#include <stdio.h>

int main() {
    int numeros[20];
    int distintos[5];
    int i, j, numero, contador = 0, contador_distintos = 0;


    for (contador = 0; contador < 20; contador++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        //Guarda o numero no vetor de numeros (aqui podem estar repetidos)
        numeros[contador] = numero;

        //Cada vez que um numero for digitado vai ser procurado no
        //vetor de numeros únicos/distintos
        int encontrado = 0;
        for (j = 0; j < contador; j++) {
            if (numeros[j] == numero) {
                encontrado = 1; //Marca como encontrado
                break;
            }
        }

        if (encontrado == 0) {
            distintos[contador_distintos] = numero;
            contador_distintos++;

            //Se atingimos 5 numeros unicos paramos de perdir numeros
            if (contador_distintos == 5){
                break;
            }
        }
    }

    //Ate aqui resolvemos a parte de controlar os 20 numeros ou 5 únicos
    //Próxima parte é a ordenação do vetor para depois exibir eles

    // Ordena os n�meros distintos em ordem crescente (usando Bubble Sort)
    for (i = 0; i < contador_distintos - 1; i++) {
        for (j = 0; j < contador_distintos - 1; j++) {
            if (distintos[j] > distintos[j + 1]) {
                int temp = distintos[j];
                distintos[j] = distintos[j + 1];
                distintos[j + 1] = temp;
            }
        }
    }

    //Última parte: exibir os valores no vetor.
    //Como pode ser que nao tenham 5 (cen�rio onde foram digitados os 20)
    printf("Os 5 n�meros distintos em ordem crescente:\n");

    for (i = 0; i < contador_distintos; i++) {
        printf("%d ", distintos[i]);
    }

    return 0;
}