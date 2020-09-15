#include <iostream>
#include <string>
#include "../include/Coordenadas.H"

using namespace std;

int main(){
	Coordenadas ObjPunto;

	ObjPunto.setCoordenadaX(1.0);
    ObjPunto.setCoordenadaY(2.0);

	ObjPunto.imprimeCoordenadas;

	return 0;
}