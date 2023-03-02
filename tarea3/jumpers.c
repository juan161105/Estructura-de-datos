#include <stdio.h>
#include <stdlib.h>

int main() {
    int longitud, i, valorAc, valorAn, esJolly;
    while (scanf("%d", &longitud) == 1) {
        int diferencias[longitud-1];
        for (i= 0; i < longitud-1; i++) {
            diferencias[i]= 0;
        }
        scanf("%d", &valorAn);
        for (i= 1; i < longitud; i++) {
            scanf("%d", &valorAc);
            int diferenciaAbs= abs(valorAc - valorAn);
            if (diferenciaAbs > 0 && diferenciaAbs < longitud && diferencias[diferenciaAbs-1] == 0) {
                diferencias[diferenciaAbs-1]= 1;
            }
            valorAn= valorAc;
        }
        esJolly= 1;
        i= 0;
        while (i < longitud-1 && esJolly) {
            if (diferencias[i] == 0) {
                esJolly= 0;
            }
            i++;
        }
        if (esJolly) {
            printf("Jolly\n");
        } else {
            printf("Not jolly\n");
        }
    }
    return 0;
}
