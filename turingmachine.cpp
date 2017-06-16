#include "turingmachine.hpp"

TuringMachine::TuringMachine() : p(nullptr), cinta(nullptr), transiciones(nullptr), palabra(""), estado_inicial(""), estado_final(""){    }

int TuringMachine::validarPalabra(string palabra){
    bool leyo = true;;
    liberarCintaAnterior();
    
    cinta = crear_cinta(palabra.at(0));
    for(int i(1); i < (int)palabra.length(); i++){
        agregar_derecha_nodo_cinta(&cinta, palabra.at(i));
    }
    
    liberarPunteroAnterior();
    
    p = crear_puntero(cinta, TuringMachine::estado_inicial);
    while(leyo){
        leyo = TuringMachine::leer_transicion();
        if (leyo == true && p->estado_actual.compare(estado_final) == 0){
            return 0;
        }
    }
    return 1;
    
}

bool TuringMachine::leer_transicion(){
    nodo_trans* trans(transiciones);
    while(trans != nullptr){
        if ( trans->transicio->estado_lectura.compare(p->estado_actual) == 0 && trans->transicio->simbolo_lectura == p->posicion->caracter ){
            if(trans->transicio->movimiento_puntero == 'd' || trans->transicio->movimiento_puntero == 'D'){
                p->posicion->caracter = trans->transicio->simbolo_destino;
                if (p->posicion->derecha == NULL){
                    agregar_derecha_nodo_cinta(&cinta, ' ');
                }
                p->posicion = p->posicion->derecha;
                p->estado_actual = trans->transicio->estado_destino;
            }else{
                p->posicion->caracter = trans->transicio->simbolo_destino;
                if (p->posicion->izquierda == NULL){
                    agregar_izquierda_nodo_cinta(&cinta, ' ');
                }
                p->posicion = p->posicion->izquierda;
                p->estado_actual = trans->transicio->estado_destino;
            }
            return true;
        }
        trans = trans->siguiente;
    }
    return false;
}

void TuringMachine::eliminarTransicion(nodo_trans** transicioness , transicion* eliminar){
    int a = 0;
    nodo_trans* cont = *transicioness;
    while (cont != nullptr) {
        a++;
        cont = cont->siguiente;
    }
    nodo_trans* aux = transiciones;
    nodo_trans* aux2 = transiciones;
    if (aux->transicio == eliminar){
        transiciones = transiciones->siguiente;
    }else{
        aux = aux -> siguiente;
        while(aux != NULL && aux -> transicio != eliminar){
            aux = (aux) -> siguiente;
            aux2 = (aux2) -> siguiente;
        }
        if(aux->siguiente !=NULL){
            aux2 -> siguiente = aux -> siguiente;
        }else{
            aux2 -> siguiente = NULL;
        }
    }
    delete(aux);
    if (a == 1){
        this->transiciones = nullptr;
    }
}

void TuringMachine::liberarCintaAnterior(){
    if (cinta != nullptr){
        nodo_cinta* aux = cinta;
        nodo_cinta* aux2;
        while(aux->izquierda != nullptr){
            aux = aux->izquierda;
        }
        while(aux != nullptr){
            aux2 = aux->derecha;
            delete(aux);
            aux = aux2;
        }
        cinta = nullptr;
    }
}

void TuringMachine::liberarPunteroAnterior(){
    delete(p);
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
