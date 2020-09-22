class Fecha
{
private:
    int Dia;
    int Mes;
    int Anio;
public:
    Fecha();
    Fecha(int, int, int);
    void setDia(int);
    void setMes(int);
    void setAnio(int);
    int getDia();
    int getMes();
    int getAnio();
}