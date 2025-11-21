#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10], vetorUniao[20];
    int contador, contAux, podeAdicionarNoVetorUniao, contUniao;

    for (contador = 0; contador <= 9; contador++){
        printf("Vetor 1 | Informe o numero %d: ", contador + 1);
        scanf("%d", &vetor1[contador]);
    }

    for (contador = 0; contador <= 9; contador++){
        printf("Vetor 2 | Informe o numero %d: ", contador + 1);
        scanf("%d", &vetor2[contador]);
    }

    contUniao = 0;

    for(contador = 0; contador <= 9; contador++){
        podeAdicionarNoVetorUniao = 1; //Assume que vai poder adicioanr

        //Procura no vetorUnicao se o elemento existe.
        //Em cada um dos elementos do uniao deve ser comparado com o
        //elemento atual do vetor na posi��o atual
        for(contAux = 0; contAux <= 19; contAux++){
            if(vetorUniao[contAux] == vetor1[contador]){
                podeAdicionarNoVetorUniao = 0;//muda o valor para nao permitir adicionar
                break; //Nao tem porque seguir se j� se sabe que tem o numero la.
            }
        }

        if (podeAdicionarNoVetorUniao == 1){
            vetorUniao[contUniao] = vetor1[contador];
            contUniao++;
        }
    }

    //Faz o mesmo para o vetor2
    for(contador = 0; contador <= 9; contador++){
        podeAdicionarNoVetorUniao = 1; //Assume que vai poder adicioanr

        for(contAux = 0; contAux <= 19; contAux++){
            if(vetorUniao[contAux] == vetor2[contador]){
                podeAdicionarNoVetorUniao = 0;//muda o valor para nao permitir adicionar
                break; //Nao tem porque seguir se j� se sabe que tem o numero la.
            }
        }

        if (podeAdicionarNoVetorUniao == 1){
            vetorUniao[contUniao] = vetor2[contador];
            contUniao++;
        }
    }


    printf("\n\nVetor 1: ");
    for (contador = 0; contador <= 9; contador++){
        printf(" %d ", vetor1[contador]);
    }

    printf("\n\nVetor 2: ");
    for (contador = 0; contador <= 9; contador++){
        printf(" %d ", vetor2[contador]);
    }


    printf("\n\nVetor Uniao: ");
    //Vamos ate contUniao - 1 porque ele veio sendo incrementado sempre que foi adicionado um novo elemente
    for (contador = 0; contador <= contUniao - 1; contador++){
        printf(" %d ", vetorUniao[contador]);
    }

    return 0;
}
