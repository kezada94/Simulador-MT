#include "turingstructs.h"

nodo_cinta* crear_cinta(char a){
    nodo_cinta* cinta = new nodo_cinta;
    cinta->caracter = a;
    cinta->izquierda = NULL;
    cinta->derecha = NULL;
    
    return cinta;
}

void agregar_derecha_nodo_cinta(nodo_cinta** cinta, char a){
    nodo_cinta* p = new nodo_cinta;
    p->caracter = a;
    p->derecha = NULL;
    nodo_cinta* aux = *cinta;
    while(aux->derecha != NULL){
        aux = aux->derecha;
    }
    aux->derecha = p;
    p->izquierda = aux;
    
}

void agregar_izquierda_nodo_cinta(nodo_cinta** cinta, char a){
    nodo_cinta* p = new nodo_cinta;
    p->caracter = a;
    p->izquierda = NULL;
    nodo_cinta* aux = *cinta;
    while(aux->izquierda != NULL){
        aux = aux->izquierda;
    }
    aux->izquierda = p;
    p->derecha = aux;
    
}

puntero* crear_puntero(nodo_cinta* comienzo, string estado_actual){
    puntero* p = new puntero;
    p->posicion = comienzo;
    p->estado_actual = estado_actual;
    
    return p;
}

transicion* crear_transicion(string estado_lectura, char simbolo_lectura, string estado_destino, char simbolo_destino, char movimiento_puntero){
    transicion* t = new transicion;
    t->estado_lectura = estado_lectura;
    t->simbolo_lectura = simbolo_lectura;
    t->estado_destino = estado_destino;
    t->simbolo_destino = simbolo_destino;
    t->movimiento_puntero = movimiento_puntero;
    
    return t;
}

nodo_trans* crear_nodo_trans(transicion* nueva_trans){
    nodo_trans* n = new nodo_trans;
    n->transicion = nueva_trans;
    n->siguiente = NULL;
    
    return n;
}

void agregar_nodo_trans(nodo_trans** lista_transiciones, transicion* nueva_trans){
    nodo_trans* n = crear_nodo_trans(nueva_trans);
    nodo_trans* aux = *lista_transiciones;
    while (aux->siguiente != NULL) {
        aux = aux->siguiente;
    }
    aux->siguiente = n;
}



