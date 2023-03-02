#include <stdio.h>

int main() {
    int numCasos, numEstaciones, inicio, casosPrueba, estacionActual, contadorGasolina;
    scanf("%d", &numCasos);
    for (casosPrueba = 1; casosPrueba <= numCasos; casosPrueba++) {
        scanf("%d", &numEstaciones);
        int gasolina[numEstaciones], necesidad[numEstaciones];
        for (estacionActual = 0; estacionActual < numEstaciones; estacionActual++) {
            scanf("%d", &gasolina[estacionActual]);
        }
        for (contadorGasolina = 0; contadorGasolina < numEstaciones; contadorGasolina++) {
            scanf("%d", &necesidad[contadorGasolina]);
        }
        inicio = -1;
        _Bool encontrado = 0;
        for (estacionActual = 0; estacionActual < numEstaciones && !encontrado; estacionActual++) {
            int gas = 0;
            _Bool encontrado2 = 1;
            for (contadorGasolina = estacionActual; contadorGasolina < numEstaciones + estacionActual; contadorGasolina++) {
                int estacion = contadorGasolina % numEstaciones;
                gas += gasolina[estacion] - necesidad[estacion];
                if (gas < 0) {
                    encontrado2 = 0;
                }
            }
            if (encontrado2) {
                inicio = estacionActual + 1;
                encontrado = 1;
            }
        }
        if (encontrado) {
            printf("Case %d: Possible from station %d\n", casosPrueba, inicio);
        } else {
            printf("Case %d: Not possible\n", casosPrueba);
        }
    }
    return 0;
}






