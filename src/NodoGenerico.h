//
// Created by ariad on 17/9/2020.
//

#ifndef MY_PROJECT_NAME_NODOGENERICO_H
#define MY_PROJECT_NAME_NODOGENERICO_H
template <class T>
class Nodo {
private:
    Nodo * sig;
    T* objetoPtr;
public:
    Nodo(T*, Nodo*);
    virtual ~Nodo();
    T* getObjetoPtr();
    Nodo* getSiguiente();
    void setObjetoPtr(T*);
    void setSiguiente(Nodo*);
};
#endif //MY_PROJECT_NAME_NODOGENERICO_H
