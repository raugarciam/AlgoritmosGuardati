#include <iostream>
#include "../include/Persona.H"

using namespace std;

void Persona::setNombre(string _Nombre){
	this->Nombre = _Nombre;
}

void Persona::setDomicilio(string _Domicilio){
	this->Domicilio = _Domicilio;
}

void Persona::setEdad(int _Edad){
	this->Edad = _Edad;
}

string Persona::getNombre(){
	return this->Nombre;
}

string Persona::getDomicilio(){
	return this->Domicilio;
}

int Persona::getEdad(){
	return this->Edad;
}

void Persona::imprimePersona(){
	cout << "Nombre: " << this->Nombre << endl;
	cout << "Domicilio: " << this->Domicilio << endl;
	cout << "Edad: " << this->Edad << endl;
}

