#pragma once

class Fecha
{
    public:
        Fecha();
        Fecha(int, int, int);
        int diasEnMes();

        //sets
        void setDia(int d);
        void setMes(int m);
        void setAnio(int a);

        //sets;
        int getDia(){return _dia;}
        int getMes(){return _mes;}
        int getAnio(){return _anio;}

        void agregarDias(int);
        void diaSemana();
        void toString(); //convierte la fecha en string
        void mostrar(); //muestra tood
        void cargar(); //carga todo
         ~Fecha();
    private:
        int _dia;
        int _mes;
        int _anio;

        void agregarDia();
        void restarDia();
        bool esBisiesto();
};

#endif // FECHA_H
