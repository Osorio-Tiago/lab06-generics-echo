//
// Created by ariad on 17/9/2020.
//

#include "NodoGenerico.h"
template<class T>
Nodo<T>::Nodo(T* ptr, Nodo* _nodo) :
        objetoPtr(ptr), sig(_nodo)
{}

template<class T>
Nodo<T>::~Nodo(){
    delete objetoPtr;
}

template<class T>
T* Nodo<T>::getObjetoPtr(){
    return objetoPtr;
}

template<class T>
Nodo<T>* Nodo<T>::getSiguiente(){
    return sig;
}

template<class T>
void Nodo<T>::setObjetoPtr(T* ptr){
    objetoPtr = ptr;
}

template<class T>
void Nodo<T>::setSiguiente(Nodo* _nodo){
    sig = _nodo;
}

