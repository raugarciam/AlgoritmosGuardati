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
    void setDireccion(string);
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
    void hacerRetiro(float);
    void hacerDeposito(float);
};

