//
// Created by ariad on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_LISTAGENERICA_H
#define MY_PROJECT_NAME_LISTAGENERICA_H
#include "NodoGenerico.h"
#include<fstream>
#include<ostream>
using namespace std;
template <class T>
class Lista{
private:
    Nodo<T>* primero;
public:
    Lista();
    virtual ~Lista();
    Nodo<T>* getPrimero();
    void limpiaLista();

    T* retornaElemento(int);
    bool insertaObjeto(T*);
    string verLista();

};
#endif //MY_PROJECT_NAME_LISTAGENERICA_H
