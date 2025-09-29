#include <stdio.h>

int main() {
    int dataInicio, dataFim;
    int diaInicio, mesInicio, anoInicio; // Data inicial
    int diaFim, mesFim, anoFim; // Data final
    int ano, mes, dia;

    // Solicita ao usuário informar a data inicial
    printf("Informe a data inicial (DDMMAAAA): ");
    scanf("%d", &dataInicio);

    // Extrai informacoees de dia, mes e ano da data inicial
    diaInicio = dataInicio / 1000000;
    mesInicio = (dataInicio / 10000) % 100;
    anoInicio = dataInicio % 10000;

    // Solicita ao usuario informar a data final
    printf("Informe a data final (DDMMAAAA): ");
    scanf("%d", &dataFim);

    // Extrai informaocoes de dia, mes e ano da data final
    diaFim = dataFim / 1000000;
    mesFim = (dataFim / 10000) % 100;
    anoFim = dataFim % 10000;

    //Mostra todas as datas entre as duas datas, incluindo a inicial e a final
    printf("Datas entre %02d/%02d/%d e %02d/%02d/%d:\n", diaInicio, mesInicio, anoInicio, diaFim, mesFim, anoFim);

    for (ano = anoInicio; ano <= anoFim; ano++) {
        //Assume que inicia em Jan e termina em Dez
        int mesInicial = 1;
        int mesFinal = 12;

        if (ano == anoInicio) {
            mesInicial = mesInicio ;
        }

        if (ano == anoFim){
            mesFinal = mesFim;
        }

        for (mes = mesInicial; mes <= mesFinal; mes++) {
            int diaInicial = 1;
            if (ano == anoInicio && mes == mesInicio){
                diaInicial = diaInicio;
            }

            int diaFinal = 31; // Janeiro, Marco, Maio, Julho, Agosto, Outubro, Dezembro

            if (mes == 2) { // Fevereiro
                // Verifica se o ano � bissexto
                if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                    diaFinal = 29;
                }
                else {
                    diaFinal = 28;
                }
            } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) { // Abril, Junho, Setembro, Novembro
                diaFinal = 30;
            }

            if (ano == anoFim && mes == mesFim) {
                diaFinal = diaFim;
            }

            for (dia = diaInicial; dia <= diaFinal; dia++) {
                printf("%02d/%02d/%d\n", dia, mes, ano);
            }
        }
    }
}