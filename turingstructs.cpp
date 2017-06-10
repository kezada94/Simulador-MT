#include "turingstructs.h"

nodo_cinta* crear_cinta(char a){
    nodo_cinta* cinta = new nodo_cinta;
    cinta->caracter = a;
    cinta->izquierda = NULL;
    cinta->derecha = NULL;
    
    return cinta;
}
