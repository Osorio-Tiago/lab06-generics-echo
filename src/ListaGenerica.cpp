//
// Created by ariad on 17/9/2020.
//
#include "ListaGenerica.h"
#include <sstream>

template <class T>
Lista<T>::Lista(){
    primero = NULL;
}

template <class T>
Lista<T>::~Lista(){
    this->limpiaLista();
}

template<class T>
void Lista<T>::limpiaLista() {
    Nodo<T>* actual = NULL;
    while (primero != NULL)
    {
        actual = primero;
        primero = actual->getSiguiente();  // Había un error...
        delete actual;
    }
}

template <class T>
T* Lista<T>::retornaElemento(int posicion)
{
    int contador = 1;
    Nodo<T>* p = primero;
    while (p != NULL && contador < posicion)
    {
        p = p->getSiguiente();
        contador++;
    }
    if (contador == posicion) {
        return p->getObjetoPtr();
    }
    return NULL;

}
template<class T>
nodo<T>* Lista<T>::getPrimero()
{
    return primero;
}


template <class T>
bool Lista<T>::insertaObjeto(T* objeto)
{
    nodo<T>* actual;
    nodo<T>* nuevo = new Nodo<T>(objeto, NULL);
    if (primero == NULL)
    {
        primero = nuevo;
    }
    else {
        actual = primero;
        while (actual->getSiguiente() != NULL)
        {
            actual = actual->getSiguiente();
        }
        actual->setSiguiente(nuevo);
    }

    return true;
}


template <class T>
string Lista<T>::verLista()
{
    nodo<T>* p = primero;
    int cont = 1;
    stringstream s;

    if (p == NULL)
    {
        s << "No hay elementos en la lista..." << endl;
    }
    else {
        while (p != NULL)
        {
            s <<"No."<<cont<<endl<< *(p->getObjetoPtr()) << endl;
            p = p->getSiguiente();
            cont++;
        }
    }
    return s.str();
}
template<class T>
void Lista<T>::grabaLista(ofstream& sali) {

}

template<class T>
Lista<T>* Lista<T>::leeLista(ifstream& ent){
    return NULL;
}
