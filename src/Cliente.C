#include <iostream>
#include "../include/Cliente.H"

void Cliente::setNombre(string _Nombre){
    this->Nombre = _Nombre;
}

void Cliente::setDomicilio(string _Domicilio){
    this->Domicilio = _Domicilio;
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
    return this->Domicilio;
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

void Cliente::hacerRetiro(float _Monto){
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
    cout << "Domicilio: " << this->Domicilio << endl;
    cout << "Telefono: " << this->Telefono << endl;
    cout << "Numero de Cuenta: " << this->numeroCuenta << endl;
    cout << "Tipo de Cuenta: " << this->tipoCuenta << endl;
}