//Juan Pablo Andrade
//8978239
//complejidad contarOcurrencias es O(n) 
//complejidad obtenerMenores es O(n)
#include "lista.h"

int contarOcurrencias(Lista l, Elemento v){
    int contador= 0;
    for(int i=1; i<=l.longLista(); i++){
        if(l.infoLista(i) == v){
            contador++;
        }
    }
    return contador;
}

Lista obtenerMenores(Lista l, Elemento v){
    Lista menores;
    for(int i=1; i<=l.longLista(); i++){
        Elemento elem= l.infoLista(i);
        if(elem < v){
            menores.anxLista(elem);
        }
    }
    return menores;
}

int main() {
    Lista l1;
    l1.anxLista(1);
    l1.anxLista(2);
    l1.anxLista(3);
    l1.anxLista(4);
    l1.anxLista(4);
    l1.anxLista(5);
    l1.anxLista(6);
    l1.anxLista(7);
    
    Elemento v= 4;
    
    int ocurrencias= contarOcurrencias(l1, v);
    cout << "El numero" << v << "se encuentra" << ocurrencias << "veces" << endl;
    Lista menores= obtenerMenores(l1, v);

    cout << "Los numeros menores a" << v << "son los siguientes:";
    for(int i=1; i<=menores.longLista(); i++){
        cout << menores.infoLista(i) << " ";
    }
    cout << endl;
        
    return 0;
}
