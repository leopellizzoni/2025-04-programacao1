#include <stdio.h>

int main() {
    long long int numero, termo1 = 0, termo2 = 1, proximoTermo;
    int todosNaFibonacci = 1;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Informe o numero ");
        scanf("%d", &numero);

        int estaNaFibonacci = 0;
        while (termo1 <= numero) {
            if (termo1 == numero) {
                estaNaFibonacci = 1;
                break;
            }
            proximoTermo = termo1 + termo2;
            termo1 = termo2;
            termo2 = proximoTermo;
        }

        if (!estaNaFibonacci) {
            todosNaFibonacci = 0;
            printf("\nO numero informado nao esta na sequencia.\n");
            break;
        }
 
        //recome�a para o proximo numero
        termo1 = 0;
        termo2 = 1;
    }

    if (todosNaFibonacci) {
        printf("Todos os numeros fazem parte da sequencia de Fibonacci.\n");
    } else {
        printf("Pelo menos um numero nao faz parte da sequencia de Fibonacci.\n");
    }
}
