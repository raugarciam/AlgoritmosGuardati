#include <string>

using namespace std;

class Persona{
	public:
		string Nombre;
		string Domicilio;
		int Edad;
		void setNombre(string);
		void setDomicilio(string);
		void setEdad(int);
		string getNombre();
		string getDomicilio();
		int getEdad();
		void imprimePersona();
};

