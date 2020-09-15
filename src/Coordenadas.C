#include <iostream>
#include "../include/Coordenadas.H"

using namespace std;

void Coordenadas::setCoordenadaX(float _CoordenadaX){
    this->CoordenadaX = _CoordenadaX;
}

void Coordenadas::setCoordenadaY(float _CoordenadaY){
    this->CoordenadaY = _CoordenadaY;
}

float Coordenadas::getCoordenadaX(){
    return this->CoordenadaX;
}

float Coordenadas::getCoordenadaY(){
    return this->CoordenadaY
}

void Coordenadas::imprimeCoordenadas(){
    cout << "CoordenadaX = " << this->CoordenadaX <<endl;
    cout << "CoordenadaY = " << this->CoordenadaY <<endl;
}

