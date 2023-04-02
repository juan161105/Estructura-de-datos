// Juan Pablo Andrade
//8978239
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int casos, cantidad_juegos, a, x, y;
    scanf("%d", &casos);
    char f[10000][5];
    for (a= 0; a <= 9999; a++) {
        int n= a;
        for (x= 3; x >= 0; x--) {
            f[a][x]= (n % 10) + '0';
            n /= 10;
        }
    }
    while (casos--) {
        scanf("%d", &cantidad_juegos);
        char G[100][5];
        int A[100], B[100];
        for (a= 0; a < cantidad_juegos; a++) {
            scanf("%s %d/%d", G[a], &A[a], &B[a]);
        }
        int contador= 0; 
        int respuesta;
        char intento[5];
        for (a= 0; a <= 9999 && contador < 2; a++) {
            for (x= 0; x < 4; x++) {
                intento[x]= f[a][x];
            }
            bool solucion_valida = true;
            for (x= 0; x < cantidad_juegos; x++) {
                int num[10]={}, a= 0, b= 0;
                for (y= 0; y < 4; y++) {
                    num[G[x][y]-'0']++;
                }
                for (y= 0; y < 4; y++) {
                    if (num[intento[y]-'0'] > 0) {
                        b++;
                        num[intento[y]-'0']--;
                    }
                }
                for (y= 0; y < 4; y++) {
                    if (intento[y] == G[x][y]) {
                        a++;
                        b--;
                    }
                }
                if (A[x] != a || B[x] != b) {
                    solucion_valida= false;
                }
            }
            if (solucion_valida) {
                contador++;
                respuesta= a;
            }
        }
        if (contador == 1) {
            printf("%04d\n", respuesta);
        }
        else if (contador == 0) {
            printf("impossible \n");
        }
        else {
            printf("indeterminate \n");
        }
    }
    return 0;
}
//La complejidad del código es O(casos * cantidad_juegos * 10000), excluyendo la entrada y salida de datos
//la complejidad del código se debe a la inicialización de la matriz y la comparación de cada cadena de caracteres en el bucle while

