#include <stdio.h>

int main() {
    int dataInicio, dataFim;
    int diaInicio, mesInicio, anoInicio;
    int diaFim, mesFim, anoFim;
    int totalDias = 0;

    //Separação da data em partes: dia, mes e ano.
    printf("Informe a data inicial (DDMMAAAA): ");
    scanf("%d", &dataInicio);
    diaInicio = dataInicio / 1000000;
    mesInicio = (dataInicio / 10000) % 100;
    anoInicio = dataInicio % 10000;

    //Separação da data em partes: dia, mes e ano.
    printf("Informe a data final (DDMMAAAA): ");
    scanf("%d", &dataFim);
    diaFim = dataFim / 1000000;
    mesFim = (dataFim / 10000) % 100;
    anoFim = dataFim % 10000;

    int mesInicial, mesFinal;

    // Laço de anos
    for (int ano = anoInicio; ano <= anoFim; ano++) {
        if (ano == anoInicio)
        {
            mesInicial = mesInicio;
        }
        else {
            mesInicial = 1;
        }
        
        if (ano == anoFim) 
        {
            mesFinal = mesFim;
        }
        else
        {
            mesFinal = 12;
        }

        // Laço de meses
        for (int mes = mesInicial; mes <= mesFinal; mes++) {
            int diasNoMes;

            if (mes == 2) {
                diasNoMes = 28;
                if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                    diasNoMes = 29;
                }
            } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                diasNoMes = 30;
            } else {
                diasNoMes = 31;
            }

            int diaInicial = 1;
            int diaFinal = diasNoMes;

            if (ano == anoInicio && mes == mesInicio) {
                diaInicial = diaInicio;
            }
            if (ano == anoFim && mes == mesFim) {
                diaFinal = diaFim;
            }

            // Laço de dias
            for (int dia = diaInicial; dia <= diaFinal; dia++) {
                totalDias++;
            }
        }
    }

    printf("O total de dias entre as duas datas: %d\n", totalDias);
    return 0;
}