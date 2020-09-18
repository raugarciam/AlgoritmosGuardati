#include <iostream>
#include <string>
#include "../include/Triangulo.H"

using namespace std;

int main(int argc, const char** argv) {
    Triangulo triangulo;

    triangulo.setBase(20.0);
    triangulo.setAltura(300.0);

    triangulo.imprimeAtributos();

    cout << "El area del triangulo es " << triangulo.area() << endl;

    return 0;
}