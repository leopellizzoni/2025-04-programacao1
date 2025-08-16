#include <stdio.h>

int main() {
    int idade;

    // Solicitar ao usuário que informe a idade do nadador
    printf("Informe a idade do nadador: "); 
    scanf("%d", &idade);

    // Classificar o nadador nas categorias
    if (idade >= 5 && idade <= 7) {
        printf("O nadador pertence a categoria Infantil A.\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("O nadador pertence a categoria Infantil B.\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("O nadador pertence a categoria Juvenil A.\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("O nadador pertence a categoria Juvenil B.\n");
    } else if (idade >= 18) {
        printf("O nadador pertence a categoria Senior.\n");
    } else {
        printf("A idade informada nao corresponde a uma categoria valida para nadadores.\n");
    }

    return 0;
}
