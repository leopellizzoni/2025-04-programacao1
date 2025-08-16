#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    // Solicitar ao usuário que informe a altura e o sexo da pessoa
    printf("Digite a altura da pessoa em metros: "); 
    scanf("%f", &altura);

    printf("Digite o sexo da pessoa (M/m para masculino, F/f para feminino): ");
    scanf(" %c", &sexo);

    // Calcular o peso ideal da pessoa de acordo com o sexo
    if (sexo == 'm' || sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem de %.2f metros de altura é: %.2f kg\n", altura, peso_ideal);
    } else if (sexo == 'f' || sexo == 'F') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher de %.2f metros de altura é: %.2f kg\n", altura, peso_ideal);
    } else {
        printf("Sexo invalido. Por favor, digite 'M' ou 'm' para masculino, ou 'F' ou 'f' para feminino.\n");
    }

    return 0;
}
