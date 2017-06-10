#ifndef TURING_H
#define TURING_H

#include <string>

//Declaracion de estructuras de datos a utilizar
using namespace std;

struct nodo_cinta
{
	char caracter;				//Caracter actual en esa posicion de la 
	nodo_cinta* izquierda;
	nodo_cinta* derecha;
};

struct puntero
{
	nodo_cinta* posicion;
	string estado_actual;
};

struct transicion
{
	string estado_lectura;
	char simbolo_lectura;
	string estado_destino;
	char simbolo_destino;
	char movimiento_puntero;
};

struct nodo_trans
{
	transicion* transicion;
	nodo_trans* siguiente;
};

struct maquina_turing
{
	puntero* p;
	nodo_cinta* cinta;
	nodo_trans* transiciones;
	string palabra;
	string estado_incial;
	string estado_final;
};

//Declaracion de funciones
nodo_cinta* crear_cinta(char a);

void agregar_nodo_cinta(nodo_cinta** cinta, char a);

puntero* crear_puntero(nodo_cinta* comienzo, string estado_actual);

transicion* crear_transicion(string estado_lectura, char simbolo_lectura, string estado_destino, char simbolo_destino, char movimiento_puntero);

nodo_trans* crear_nodo_trans(transicion* nueva_trans);

void agregar_nodo_trans(nodo_trans** lista_transiciones, transicion* nueva_trans);

maquina_turing* crear_maquina_turing(puntero* p, nodo_cinta* cinta,	nodo_trans* lista_transiciones,	string palabra,	string estado_incial, string estado_final);

bool leer_palabra(maquina_turing** turing);

#endif
