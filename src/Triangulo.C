#include <iostream>
#include "../include/Triangulo.H"

using namespace std;

void Triangulo::setBase(float _Base){
    this->Base = _Base;
}

void Triangulo::setAltura(float _Altura){
    this->Altura = _Altura;
}

float Triangulo::getBase(){
    return this->Base;
}

float Triangulo::getAltura(){
    return this->Altura
}

void Triangulo::caculaArea(){
    return this->Base * this->Altura / 2;
}

void Triangulo::imprimeAtributos(){
    cout << "Base = " << this->Base << endl;
    cout << "Altura = " << this->Altura << endl;
}