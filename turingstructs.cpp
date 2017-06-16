#include "turingstructs.h"

//Crea la cinta con su primer y unico nodo con caracter 'a'
nodo_cinta* crear_cinta(char a){
    nodo_cinta* cinta = new nodo_cinta;
    cinta->caracter = a;
    cinta->izquierda = NULL;
    cinta->derecha = NULL;
    
    return cinta;
}

//Agrega un nodo al extremo derecho de la cinta con caracter 'a'
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
//Agrega un nodo al extremo izquierdo de la cinta con caracter 'a'
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
//Crea un elemento puntero con estado inical 'estado actual' y apuntando al comienzo de la palabra en la cinta
puntero* crear_puntero(nodo_cinta* comienzo, string estado_actual){
    puntero* p = new puntero;
    p->posicion = comienzo;
    p->estado_actual = estado_actual;
    
    return p;
}

//crea una transicion con los parametros dados
transicion* crear_transicion(string estado_lectura, char simbolo_lectura, string estado_destino, char simbolo_destino, char movimiento_puntero){
    transicion* t = new transicion;
    t->estado_lectura = estado_lectura;
    t->simbolo_lectura = simbolo_lectura;
    t->estado_destino = estado_destino;
    t->simbolo_destino = simbolo_destino;
    t->movimiento_puntero = movimiento_puntero;
    
    return t;
}

//Crea un nodo de la lista de transiciones con la transicion 'nueva_trans'
nodo_trans* crear_nodo_trans(transicion* nueva_trans){
    nodo_trans* n = new nodo_trans;
    n->transicio = nueva_trans;
    n->siguiente = NULL;
    
    return n;
}

//Agrega un nodo al final de la lista de transiciones con transicion 'nueva_trans'
void agregar_nodo_trans(nodo_trans** lista_transiciones, transicion* nueva_trans){
    nodo_trans* n = crear_nodo_trans(nueva_trans);
    nodo_trans* aux = *lista_transiciones;
    while (aux->siguiente != NULL) {
        aux = aux->siguiente;
    }
    aux->siguiente = n;
}




