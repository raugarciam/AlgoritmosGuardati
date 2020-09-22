#include "../include/Fecha.H"

Fecha::Fecha(){
    
}

Fecha::Fecha(int _Dia, int _Mes, int _Anio){
    this->Dia = _Dia;
    this->Mes = _Mes;
    this->Anio = _Anio;
}

void Fecha::setDia(int _Dia){
    this->Dia = _Dia;
}

void Fecha::setMes(int _Mes){
    this->Mes = _Mes;
}

void Fecha::setAnio(int _Anio){
    this->Anio = _Anio;
}

int getDia(){
    return this->Dia;
}

int getMes(){
    return this->Mes;
}

int getAnio(){
    return this->Anio;
}