#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar ao usuário para inserir três números inteiros
    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", &num1, &num2, &num3); 

    // Verificar qual é o maior número
    int maior = num1; // Assumindo que num1 é o maior inicialmente

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    // Exibir o maior número
    printf("Maior valor: %d\n", maior);

    return 0;
}
