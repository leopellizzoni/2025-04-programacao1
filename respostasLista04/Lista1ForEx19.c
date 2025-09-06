#include <stdio.h>

int main() {
    float peso, altura, imc, imc_maior = 0.0f;
    float peso_maior, altura_maior;
    int pessoa_maior_imc = 0;

    printf("Digite o peso e a altura de 10 pessoas:\n");

    for (int i = 0; i < 10; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Peso (em kg): ");
        scanf("%f", &peso);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        if (imc > imc_maior) {
            imc_maior = imc;
            peso_maior = peso;
            altura_maior = altura;
            pessoa_maior_imc = i + 1;
        }
    }

    printf("\nPessoa com maior IMC:\n");
    printf("Pessoa %d\n", pessoa_maior_imc);
    printf("Peso: %.2f kg\n", peso_maior);
    printf("Altura: %.2f metros\n", altura_maior);
    printf("IMC: %.2f\n", imc_maior);
}
