//Juan Pablo Andrade
//8978239
//complejidad insertarEnListaOrdenada es de O(n)
#include "lista.h"

void insertarEnListaOrdenada(Lista& l, Elemento v){
    int pos= 1;
    while(pos <= l.longLista() && l.infoLista(pos) < v){
        pos++;
    }
    l.insLista(v, pos);
}

int main() {
    Lista l1;

    l1.anxLista(2);
    l1.anxLista(4);
    l1.anxLista(6);
    l1.anxLista(8);

    Elemento v= 5;
    insertarEnListaOrdenada(l1, v);

    cout << "La lista ordenada con el numero" << v << " es: ";
    for(int i=1; i<=l1.longLista(); i++){
        cout << l1.infoLista(i) << " ";
    }
    cout << endl;

    return 0;
}

