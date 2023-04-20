//Juan Pablo Andrade
//8978239
//complejidad es de O(n log n)
//debido a que todas las operaciones que se realizan son llamadas a la función insListaOrdenada
#include "lista.h"

void insListaOrdenada(Lista& l, Elemento v){
    l.insListaOrdenada(v);
}

int main() {
    Lista L1;
    
    insListaOrdenada(L1, 2);
    insListaOrdenada(L1, 4);
    insListaOrdenada(L1, 6);
    insListaOrdenada(L1, 8);
    insListaOrdenada(L1, 10);
    insListaOrdenada(L1, 12);
    insListaOrdenada(L1, 14;
    
    Elemento v= 15;
    insListaOrdenada(L1, v);

    cout << "La lista ordenada basada en el numero " << v << " es la siguiente: ";
    for(int i=1; i<=L1.longLista(); i++){
        cout << L1.infoLista(i) << " ";
    }
    cout << endl;
    return 0;
}

