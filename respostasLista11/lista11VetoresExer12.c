#include <stdio.h>

int main()
{
    int original[5], rotacionado[5];
    
    //Leitura dos números
    for(int i = 0; i <= 4; i++)
    {
        printf("Informe o número: ");
        scanf("%d", &original[i]);
        
        //Faz a cópia para o outro vetor.
        rotacionado[i] = original[i];
    }
    
    //Faz a rotação a direita.
    int temp = rotacionado[4];
    
    for (int i = 4; i > 0; i--)
    {
        rotacionado[i] = rotacionado[i - 1];
    }
    
    rotacionado[0] = temp;
    
    printf("Valores:\n");
    //Imprime o vetor original
    for (int i = 0; i <= 4; i++)
    {
        printf(" %d ", original[i]);
    }
    
    printf("\n");
    //Imprime o vetor rotacionado
    for (int i = 0; i <= 4; i++)
    {
        printf(" %d ", rotacionado[i]);
    }

    return 0;
}