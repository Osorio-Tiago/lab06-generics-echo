//
// Created by ariad on 17/9/2020.
//
#include "ListaGenerica.h"
#include <sstream>

template <class T>
Lista<T>::Lista(){
    primero = nullptr;
}

template <class T>
Lista<T>::~Lista(){
    this->limpiaLista();
}

template<class T>
void Lista<T>::limpiaLista() {
    Nodo<T>* actual = nullptr;
    while (primero != nullptr)
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
    while (p != nullptr && contador < posicion)
    {
        p = p->getSiguiente();
        contador++;
    }
    if (contador == posicion) {
        return p->getObjetoPtr();
    }
    return nullptr;

}
template<class T>
Nodo<T>* Lista<T>::getPrimero()
{
    return primero;
}


template <class T>
bool Lista<T>::insertaObjeto(T* objeto)
{
    Nodo<T>* actual;
    Nodo<T>* nuevo = new Nodo<T>(objeto, nullptr);
    if (primero == nullptr)
    {
        primero = nuevo;
    }
    else {
        actual = primero;
        while (actual->getSiguiente() != nullptr)
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
    Nodo<T>* p = primero;
    int cont = 1;
    stringstream s;

    if (p == nullptr)
    {
        s << "No hay elementos en la lista..." << endl;
    }
    else {
        while (p != nullptr)
        {
            s <<"No."<<cont<<endl<< *(p->getObjetoPtr()) << endl;
            p = p->getSiguiente();
            cont++;
        }
    }
    return s.str();
}
