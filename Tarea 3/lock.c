#include <stdio.h>

int main() {
    int final= 0;
    int posicion, combinacion1, combinacion2, combinacion3;

    while (!final) {
        scanf("%d %d %d %d", &posicion, &combinacion1, &combinacion2, &combinacion3);

        if (posicion == 0 && combinacion1 == 0 && combinacion2 == 0 && combinacion3 == 0) {
            final= 1;
        } else {
            int grados= 80;
            grados+= (posicion + 40 - combinacion1) % 40;
            grados+= 40;
            grados+= (combinacion2 + 40 - combinacion1) % 40;
            grados+= (combinacion2 + 40 - combinacion3) % 40;

            printf("%d\n", grados*9);
        }
    }
    
    return 0;
}
