#include <stdio.h>
//k: número de consultas que se realizarán.
//n: coordenada en el eje X del punto de división.
//m: coordenada en el eje Y del punto de división.
//x: coordenada en el eje X de una residencia consultada.
//y: coordenada en el eje Y de una residencia consultada.

int main() {
    int k, n, m, x, y;
    while (scanf("%d", &k)==1 && k != 0) {
        scanf("%d %d", &n, &m);

        while (k--) {
            scanf("%d %d", &x, &y);

            if (x == n || y == m) {
                printf("divisa\n");
            } else if (x < n && y > m) {
                printf("NO\n");
            } else if (x > n && y > m) {
                printf("NE\n");
            } else if (x > n && y < m) {
                printf("SE\n");
            } else if (x < n && y < m) {
                printf("SO\n");
            }
        }
    }

    return 0;
}
