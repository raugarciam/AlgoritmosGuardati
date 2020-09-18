#include <iostream>
#include "../include/Cliente.H"

void Cliente::setNombre(string _Nombre){
    this->Nombre = _Nombre;
}

void Cliente::setDomicilio(string _Direccion){
    this->Direccion = _Direccion;
}

void Cliente::setTelefono(string _Telefono){
    this->Telefono = _Telefono;
}

void Cliente::setSaldo(float _Saldo){
    this->Saldo = _Saldo;
}

void Cliente::setTipoCuenta(int _TipoCuenta){
    this->TipoCuenta = _TipoCuenta;
}

void Cliente::setNumeroCuenta(int _NumeroCuenta){
    this->NumeroCuenta = _NumeroCuenta;
}

string Cliente::getNombre(){
    return this->Nombre;
}

string Cliente::getDomicilio(){
    return this->Direccion;
}

string Cliente::getTelefono(){
    return this->Telefono;
}

float Cliente::getSaldo(){
    return this->Saldo;
}

int Cliente::getTipoCuenta(){
    return this->TipoCuenta;
}

int Cliente::getNumeroCuenta(){
    return this->NumeroCuenta;
}

int Cliente::hacerRetiro(float _Monto){
    int Respuesta = 1;

    if ((this->Saldo - _Monto) < 0)
    {
        Respuesta = 0;
    }else{
        this->Saldo = this->Saldo - _Monto;
    }

    return Respuesta;
}

void Cliente::hacerDeposito(float _Monto){
    this->Saldo = this->Saldo + _Monto;
}

void Cliente::imprimeDatos(){
    cout << "Nombre: " << this->Nombre << endl;
    cout << "Domicilio: " << this->Direccion << endl;
    cout << "Telefono: " << this->Telefono << endl;
    cout << "Numero de Cuenta: " << this->NumeroCuenta << endl;
    cout << "Tipo de Cuenta: " << this->TipoCuenta << endl;
}