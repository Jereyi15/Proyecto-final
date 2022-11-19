#include "Comercio.h"
#include <sstream>
using std::stringstream;

Comercio::Comercio()
	:choferes(new ListaChofer()),provedores(new ListaProveedor()),rutas(new ListaRutas()),materiasPrimas(new ListaMateriaPrima()){
	
}

Comercio::~Comercio() {
	
}

void Comercio::agregarChofer (Chofer * chofer) {
	choferes->agregarChofer(chofer);
}

string Comercio::listadoChoferes ( ) {
	return choferes->toString();
}

void Comercio::agregarProveedor (Proveedor * proveedor) {
	provedores->agregarProveedor(proveedor);
}

string Comercio::listadoProveedores ( ) {
	return provedores->toString();
}

void Comercio::agregarRutas(Rutas* ruta) {
	rutas->agregarRutas(ruta);
}

string Comercio::listadoRutas(){
	return rutas->toString();
}


void Comercio::RuPrede(){
	Rutas* ruta1 = new Rutas("Caldera");
	Rutas* ruta2 = new Rutas("Atenas");
	Rutas* ruta3 = new Rutas("Poas");
	
	agregarRutas(ruta1);
	agregarRutas(ruta2);
	agregarRutas(ruta3);
}

void Comercio::agregarMateriaPrima(MateriaPrima* materiaPrima) {
	materiasPrimas->agregarMateriaPrima(materiaPrima);
}

string Comercio::listadoMateriaPrima ( ) {
	return materiasPrimas->toString();
}

MateriaPrima* Comercio::recuperarMateria(string nombre){
	return materiasPrimas->recuperarMateriaPrima(nombre);
}

double Comercio::venta(string nombre, int cantVend){
	return materiasPrimas->pagar(nombre, cantVend);
}

Rutas* Comercio::recuperarRuta(string nombre){
	return rutas->recuperarRutas(nombre);
}


