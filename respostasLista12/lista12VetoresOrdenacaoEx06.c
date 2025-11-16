#include <stdio.h>

int main() {
    int V[10];
    int valores_distintos[10];
    int ocorrencias[10] = {0};
    int i, j, contador_distintos = 0, temp_valor, temp_ocorrencias;

    for (i = 0; i < 10; i++) {
        printf("Numero: ");
        scanf("%d", &V[i]);
    }

    for (i = 0; i < 10; i++) {
        int valor_atual = V[i];
        int encontrado = 0; //Define como nao encontrado por padrao

        //Procura o numero no vetor de numeros unicos
        for (j = 0; j < contador_distintos; j++) {
            if (valores_distintos[j] == valor_atual) {
                ocorrencias[j]++;
                encontrado = 1; //Marca como encontrado
                break;
            }
        }

        if (encontrado == 0) {//Se nao foi encontrado adiciona ele
            valores_distintos[contador_distintos] = valor_atual;
            ocorrencias[contador_distintos] = 1;
            contador_distintos++;
        }
    }

    //Faz a ordenação
    for (i = 0; i < contador_distintos - 1; i++) {

        for (j = 0; j < contador_distintos - 1; j++) {
            if (valores_distintos[j] > valores_distintos[j + 1]) {

                temp_valor = valores_distintos[j];
                valores_distintos[j] = valores_distintos[j + 1];
                valores_distintos[j + 1] = temp_valor;

                temp_ocorrencias = ocorrencias[j];
                ocorrencias[j] = ocorrencias[j + 1];
                ocorrencias[j + 1] = temp_ocorrencias;
            }
        }

    }

    printf("Vetor:\n");

    for (i = 0; i < contador_distintos; i++) {
        printf("%d ocorre %d vez(es).\n", valores_distintos[i], ocorrencias[i]);
    }

    return 0;
}