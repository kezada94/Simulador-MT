//
//  turingmachine.hpp
//  
//
//  Created by Mac on 11-06-17.
//
//

#ifndef turingmachine_hpp
#define turingmachine_hpp

#include "turingstructs.h"



class TuringMachine{

public:
    TuringMachine();
    
    puntero getPuntero();
    nodo_cinta getCinta();
    nodo_trans* getTransicion();
    string getPalabra();
    string getEstado_final();
    string getEstado_inicial();
    
    void setPuntero(puntero* p);
    void setCinta(nodo_cinta* cinta);
    void setTransicion(nodo_trans* trans);
    void setEstado_final(string fin);
    void setEstado_inicial(string ini);
    
    int validarPalabra(string palabra);
    bool leer_transicion();
    void eliminarTransicion(nodo_trans** transiciones , transicion* eliminar);
    void liberarCintaAnterior();
    void liberarPunteroAnterior();
    
    
private:
    puntero* p;
    nodo_cinta* cinta;
    nodo_trans* transiciones;
    string palabra;
    string estado_inicial;
    string estado_final;
};


#endif /* turingmachine_hpp */
