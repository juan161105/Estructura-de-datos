#include "lista.h"
 
Nodo::~Nodo() {
  cout << "Borrando nodo " << dato << endl;
  sig = NULL;
  ant = NULL;
  delete sig;
  delete ant;
}

Lista::Lista() {
  act = NULL;
}

void Lista::insListaOrdenada(Elemento elem) {
  Nodo *nuevo= new Nodo;
  nuevo->dato= elem;
  nuevo->sig= NULL;
  nuevo->ant= NULL;

  if (act == NULL) {
    act= nuevo;
    nuevo->sig= nuevo;
    nuevo->ant= nuevo;
  } else if (elem <= act->dato) {
    Nodo *tmp= act->ant;
    tmp->sig= nuevo;
    nuevo->ant= tmp;
    nuevo->sig= act;
    act->ant= nuevo;
    act= nuevo;
  } else {
    Nodo *tmp= act->sig;
    while (tmp != act && elem > tmp->dato)
      tmp= tmp->sig;

    nuevo->sig= tmp;
    nuevo->ant= tmp->ant;
    tmp->ant->sig = nuevo;
    tmp->ant= nuevo;
  }
}

void Lista::elimLista(int pos) {
  Nodo *tmp, *borrar;
  if (pos >= 1 && pos <= longLista()) {
    if (pos == 1) {
      if (act != act->sig) {
        tmp = act->ant;
        borrar = tmp->sig;
        act = act->sig;
        act->ant = tmp;
        tmp->sig = act;
      } else {
        borrar = act;
        act = NULL;
      }
    } else {
      tmp = act;
      for (int i = 0; i < pos-2; i++)
          tmp = tmp->sig;
      borrar = tmp->sig;
      Nodo* sig = tmp->sig->sig;
      tmp->sig = sig;
      sig->ant = tmp;
    }

    delete borrar;
  }
}

Elemento Lista::infoLista(int pos) {
  Nodo* tmp = act;
  for (int i = 1; i < pos; i++)
      tmp = tmp->sig;
      
  return tmp->dato;
}

int Lista::longLista() {
  int ans;
  if (vaciaLista())
    ans = 0;
  else {
    Nodo* tmp, *primero;
    int cont = 1;
    tmp = act;
    primero = act;

    while (tmp->sig != primero) {
      tmp = tmp->sig;
      cont++;
    }

    ans = cont;
  }

  return ans;
}

bool Lista::vaciaLista() {
  return act == NULL;
}

Elemento Lista::buscarMenor() {
  Nodo* tmp;
  Elemento ans;
  if (act == NULL)
    ans = -1;
  else {
    tmp = act->sig;
    ans = act->dato;
    while (tmp != act) {
      if (tmp->dato < ans)
      ans = tmp->dato;
      tmp = tmp->sig;
    }
  }

  return ans;
}

