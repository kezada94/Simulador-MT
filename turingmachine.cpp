//
//  turingmachine.cpp
//  
//
//  Created by Mac on 11-06-17.
//
//

#include "turingmachine.hpp"

TuringMachine::TuringMachine() : p(nullptr), cinta(nullptr), transiciones(nullptr), palabra(""), estado_inicial(""), estado_final(""){    }

int TuringMachine::validarPalabra(string palabra){
    
    cinta = crear_cinta(palabra.at(0));
    for(int i(1); i < (int)palabra.length(); i++){
        agregar_derecha_nodo_cinta(&cinta, palabra.at(i));
    }
    p = crear_puntero(cinta, TuringMachine::estado_inicial);
    while(!TuringMachine::leer_transicion()){}
    
    if (p->estado_actual.compare(estado_final)){
        return 0;
    }
    return 1;
    
}

bool TuringMachine::leer_transicion(){
    nodo_trans* trans(transiciones);
    while(trans != NULL){
        if ( trans->transicion->estado_lectura.compare(p->estado_actual) == 0 && trans->transicion->simbolo_lectura == p->posicion->caracter){
            if(trans->transicion->movimiento_puntero == 'd' || trans->transicion->movimiento_puntero == 'D'){
                //movimiento a la derecha
                p->posicion->caracter = trans->transicion->simbolo_destino;
                if (p->posicion->derecha == NULL){
                    agregar_derecha_nodo_cinta(&cinta, ' ');
                }
                p->posicion = p->posicion->derecha;
                p->estado_actual = trans->transicion->estado_destino;
            }else{
                //movimiento izquierda
                p->posicion->caracter = trans->transicion->simbolo_destino;
                if (p->posicion->izquierda == NULL){
                    agregar_izquierda_nodo_cinta(&cinta, ' ');
                }
                p->posicion = p->posicion->izquierda;
                p->estado_actual = trans->transicion->estado_destino;
            }
            return true;
        }
        trans = trans->siguiente;
    }
    return false ;
}

nodo_trans* TuringMachine::getTransicion(){
    return transiciones;
}

void TuringMachine::setTransicion(nodo_trans* tran){
    transiciones = tran;
}

string TuringMachine::getEstado_final(){
    return estado_final;
}

void TuringMachine::setEstado_final(string a){
    estado_final = a;
}

string TuringMachine::getEstado_inicial(){
    return estado_inicial;
}

void TuringMachine::setEstado_inicial(string a){
    estado_inicial = a;
}
