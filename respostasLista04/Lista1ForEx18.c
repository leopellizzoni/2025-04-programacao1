#include <stdio.h>

int main() {
    float peso, altura, altura_mais_alta = 0.0f;
    float peso_mais_alto;
    int pessoa_mais_alta = 0;

    printf("Digite o peso e a altura de 10 pessoas:\n");

    for (int i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Peso (em kg): ");
        scanf("%f", &peso);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        if (altura > altura_mais_alta) {
            altura_mais_alta = altura;
            peso_mais_alto = peso;
            pessoa_mais_alta = i + 1;
        }
    }

    printf("\nPessoa mais alta:\n");
    printf("Pessoa %d\n", pessoa_mais_alta);
    printf("Peso: %.2f kg\n", peso_mais_alto);
    printf("Altura: %.2f metros\n", altura_mais_alta);
}
