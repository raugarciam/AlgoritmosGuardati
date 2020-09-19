#include <string>

using namespace std;

class Cliente
{
private:
    string Nombre;
    string Direccion;
    string Telefono;
    float Saldo;
    int TipoCuenta;
    int NumeroCuenta;
public:
    void setNombre(string);
    void setDomicilio(string);
    void setTelefono(string);
    void setSaldo(float);
    void setTipoCuenta(int);
    void setNumeroCuenta(int);
    string getNombre();
    string getDomicilio();
    string getTelefono();
    float getSaldo();
    int getTipoCuenta();
    int getNumeroCuenta();
    void imprimeDatos();
    int hacerRetiro(float);
    void hacerDeposito(float);
    Cliente(string _Nombre, string _Telefono, float _Saldo);
    Cliente(string _nombre, string _Direccion, string _Telefono,
            float _Saldo = 0, int _TipoCuenta = 1, int _NumeroCuenta = 0);
};

