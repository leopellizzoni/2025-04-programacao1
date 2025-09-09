#include <stdio.h>

int main() {
    long long populacao_A = 90000000;
    long long populacao_B = 200000000;
    float taxa_crescimento_A = 0.031;
    float taxa_crescimento_B = 0.015;
    int anos = 0; // Contador de anos

    while (populacao_A <= populacao_B) {
        //Lembrar que os 2 paises crescem a população
        populacao_A += populacao_A * taxa_crescimento_A;
        populacao_B += populacao_B * taxa_crescimento_B;
        anos++;
    }

    printf("A população do país A ultrapassará a população do país B em %d anos.\n", anos);
}
