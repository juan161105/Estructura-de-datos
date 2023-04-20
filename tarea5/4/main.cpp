//Juan Pablo Andrade
//8978239
//complejidad concatenarListasde es O(n2)
#include "lista.h"

void concatenarListas(Lista& l1, Lista& l2){
    for(int i=1; i<=l2.longLista(); i++){
        l1.anxLista(l2.infoLista(i));
    }
}

int main() {
    Lista l1;
    l1.anxLista(1);
    l1.anxLista(2);
    l1.anxLista(3);
    l1.anxLista(4;
    l1.anxLista(5);

    Lista l2;
    l2.anxLista(6);
    l2.anxLista(7);
    l2.anxLista(8);
	l2.anxLista(9);
	l2.anxLista(10);
    concatenarListas(l1, l2);

    cout << "La lista concatenada resultante de l1 y l2 es la siguiente:";
    for(int i=1; i<=l1.longLista(); i++){
        cout << l1.infoLista(i) << " ";
    }
    cout << endl;

    return 0;
}

