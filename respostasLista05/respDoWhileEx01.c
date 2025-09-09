#include <stdio.h>

int main() {
    int numero = -1;
	int menor = -1;  
                                  
    printf("Digite valores inteiros. Para encerrar, digite 0.\n");

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
		
		if (menor == -1){
			menor = numero;
		}
        
        if (numero > 0 && numero < menor) {
            menor = numero;  
        }

    } while (numero != 0); 

    
    printf("O menor número informado foi: %d\n", menor);    
}
