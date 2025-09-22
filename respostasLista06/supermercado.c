#include <stdio.h>

int main(){
    int codCliente = 0, qtdClientes = 0;
    float valorCliente = 0, valorTodosClientes = 0, valProduto = 0, qtdProduto = 0, descontoCliente, descontoTotal = 0;
    
    printf("------Supermecado C");

    do{
        printf("\n----------------------------------------");
        printf("\nInforme o codigo do cliente: ");
        scanf("%d", &codCliente);
        
        if (codCliente <= 0)
        {
            break;
        }
          
        qtdClientes++; //Precisa para fazer depois o valor médio por cliente;
        valorCliente = 0; //Precisa zerar para não seguir incrementando apartir do cliente anterior.

        do{
            printf("    Informe o valor do Produto R$: ");
            scanf("%f", &valProduto);

            if (valProduto <= 0)
            {
                break;
            }
            printf("    Informe a quantidade: ");
            scanf("%f", &qtdProduto);
            valorCliente = valorCliente + (valProduto * qtdProduto);
            
        }while(valProduto > 0);

        //Aplica o desconto de 1% e armazena na variavel de descontos aplicados quanto foi oferecido
        if (valorCliente > 1099)
        {
            descontoCliente = valorCliente * 0.01;
            descontoTotal = descontoTotal + descontoCliente;
            valorCliente = valorCliente - descontoCliente;
        }

        printf("\n    Total Cliente %d R$: %.2f", codCliente, valorCliente);

        valorTodosClientes = valorTodosClientes + valorCliente;
    } while (codCliente > 0);

    //Observar que é impresso fora dos laços.. depois que tudo foi resolvido.
    printf("\n=====================================================");
    printf("\nTotal dos Clientes R$: %.2f", valorTodosClientes);
    printf("\nValor medio por cliente R$: %.2f", valorTodosClientes / qtdClientes);
    printf("\nDescontos Totais Oferecidos: %.2f", descontoTotal);
    
    return 0;
}