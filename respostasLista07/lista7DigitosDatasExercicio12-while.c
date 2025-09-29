#include <stdio.h>

int main() {
    int dataInicio, dataFim;
    int diaInicio, mesInicio, anoInicio;
    int diaFim, mesFim, anoFim;
    int totalDias = 0;

    printf("Informe a data inicial (DDMMAAAA): ");
    scanf("%d", &dataInicio);

    // Extrai informaoees de dia, mes e ano da data inicial
    diaInicio = dataInicio / 1000000;
    mesInicio = (dataInicio / 10000) % 100;
    anoInicio = dataInicio % 10000;


    printf("Informe a data final (DDMMAAAA): ");
    scanf("%d", &dataFim);

    // Extrai informacoes de dia, mes e ano da data final
    diaFim = dataFim / 1000000;
    mesFim = (dataFim / 10000) % 100;
    anoFim = dataFim % 10000;

    //Loop para calcular o total de dias entre as duas datas.
    while (diaInicio != diaFim || mesInicio != mesFim || anoInicio != anoFim) {
        totalDias++;
        diaInicio++;

        if ((mesInicio == 2 && (((anoInicio % 4 == 0) && (anoInicio % 100 != 0)) || (anoInicio % 400 == 0))) && diaInicio > 29) {
            diaInicio = 1;
            mesInicio++;
        } else if ((mesInicio == 2 && !(((anoInicio % 4 == 0) && (anoInicio % 100 != 0)) || (anoInicio % 400 == 0))) && diaInicio > 28) {
            diaInicio = 1;
            mesInicio++;
        } else if (((mesInicio == 4 || mesInicio == 6 || mesInicio == 9 || mesInicio == 11)) && diaInicio > 30) {
            diaInicio = 1;
            mesInicio++;
        } else if (diaInicio > 31) {
            diaInicio = 1;
            mesInicio++;
        }

        if (mesInicio > 12) {
            mesInicio = 1;
            anoInicio++;
        }
    }

    // Mostra o numero total de dias entre as duas datas
    printf("O total de dias entre as duas datas �: %d\n", totalDias);

    return 0;
}