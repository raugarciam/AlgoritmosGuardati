#include <iostream>
#include <string>
#include "../include/Cliente.H"

using namespace std;

int main(int argc, char const *argv[])
{
    float SaldoCliente;
    Cliente ObjCliente1;
    Cliente ObjCliente2;
    
    ObjCliente1.setNombre("Raul Garcia");
    ObjCliente1.setDomicilio("Libertadores 1314");
    ObjCliente1.setTelefono("729 444 1538");
    ObjCliente1.setSaldo(20000.00);
    ObjCliente1.setTipoCuenta(1);
    ObjCliente1.setNumeroCuenta(1234);

    ObjCliente2.setNombre("Laura Gonzalez");
    ObjCliente2.setDomicilio("Libertadores 1314");
    ObjCliente2.setTelefono("722 885 2967");
    ObjCliente2.setSaldo(10000.00);
    ObjCliente2.setTipoCuenta(2);
    ObjCliente2.setNumeroCuenta(1235);

    ObjCliente1.imprimeDatos();
    cout << "====================" << endl;
    ObjCliente2.imprimeDatos();

    if (ObjCliente1.getTipoCuenta() == 1)
    {
        if (ObjCliente1.hacerRetiro(1000.00))
        {
            cout << "\nRetiro realizado con exito" << endl;    
        }else
        {
            cout << "No tiene saldo suficiente para realizar el retiro" << endl;
        }
        
    }
    ObjCliente2.hacerDeposito(1000.0);

    cout << "\nDespues de realizar las operaciones" << endl;
    ObjCliente1.imprimeDatos();
    cout << "====================" << endl;
    ObjCliente2.imprimeDatos();

    return 0;
}
