#include <iostream>
#include <string>
#include "../include/Persona.H"

using namespace std;

int main(){
	Persona ObjJefe;
	Persona ObjGerente;

	ObjJefe.setNombre("Juan Perez");
	ObjJefe.setDomicilio("Nadie sabe donde vive");
	ObjJefe.setEdad(40);

	ObjGerente.setNombre("Raul Garcia");
        ObjGerente.setDomicilio("Libertadores 1314");
        ObjGerente.setEdad(51);

	ObjJefe.imprimePersona();
	ObjGerente.imprimePersona();

	return 0;
}
