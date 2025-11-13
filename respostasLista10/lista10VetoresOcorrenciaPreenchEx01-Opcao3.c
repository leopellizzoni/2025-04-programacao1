#include <stdio.h>

int main()
{
	int vetor[5] = {5, 1, 10, 1, 5}; int jaImpressos[5];
	int numeroComparar, totalVezes = 0, contJaImpressos = 0;

	for(int contComparar = 0; contComparar <= 4; contComparar++)
	{
	    totalVezes = 0;
		for(int i = 0; i <= 4; i++)
		{
			if(vetor[contComparar] == vetor[i])
			{
				totalVezes++;
			}
		}

		if (totalVezes >= 2)
		{
		    int podeImprimir = 1;
		    for(int cont = 0; cont < contJaImpressos; cont++) //apenas para percorrer o vetor dos numeros que ja foram impressos
		    {
		        if (jaImpressos[cont] == vetor[contComparar])
		        {
		            podeImprimir = 0; //significa que nao pode imprimir.
		            break;
		        }   
		    }
		    
			if (podeImprimir == 1)
			{
			    printf("\nO numero %d repetiu %d vezes", vetor[contComparar], totalVezes); 
			    jaImpressos[contJaImpressos] = vetor[contComparar];
			    contJaImpressos++;
			}
		}
	}

	return 0;
}