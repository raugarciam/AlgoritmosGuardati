#include <iostream>
#include "../include/Fecha.H"

using namespace std;

int main(int argc, char const *argv[])
{
    Fecha ObjFecha;

    ObjFecha.setDia(29);
    ObjFecha.setMes(11);
    ObjFecha.setAnio(1968);

    cout << "Dia -> " << ObjFecha.getDia() << endl;
    cout << "Mes -> " << ObjFecha.getMes() << endl;
    cout << "Anio -> " << ObjFecha.getAnio() << endl;

    Fecha ObjHoy(21, 9, 2020);

    cout << "Dia hoy -> " << ObjHoy.getDia() << endl;
    cout << "Mes hoy -> " << ObjHoy.getMes() << endl;
    cout << "Anio hoy -> " << ObjHoy.getAnio() << endl;

    return 0;
}
