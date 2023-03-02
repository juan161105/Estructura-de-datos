#include <stdio.h>
int main() {
    int casosPrueba;
    scanf("%d", &casosPrueba);

    while (casosPrueba--) {
        int numeroTiendas;
        scanf("%d", &numeroTiendas);

        int tiendas[numeroTiendas];
        int i, j;
        for (i= 0; i < numeroTiendas; i++) {
            scanf("%d", &tiendas[i]);
        }

        for (i= 0; i < numeroTiendas-1; i++) {
            for (j= i+1; j < numeroTiendas; j++) {
                if (tiendas[i] > tiendas[j]) {
                    int variableTemporal = tiendas[i];
                    tiendas[i]= tiendas[j];
                    tiendas[j]= variableTemporal;
                }
            }
        }

        int distanciaMinima= 2 * (tiendas[numeroTiendas-1] - tiendas[0]);
        printf("%d\n", distanciaMinima);
    }

    return 0;
}

