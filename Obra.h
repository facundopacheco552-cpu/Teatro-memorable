#pragma once


class Obra
{
    public:
        Obra();
        virtual ~Obra();

        ///sets
        setIdObra(int );
        setNombre(const char *valor){strcpy( _nombre,valor);}//convierte un string en para poner dentro del
        setGenero(const char *valor){strcopy(_genero, valor);}
        setDirector(const char *valor){strcopy(director, valor);}
        setClasificaion(int );
        setDuracion(int );



        ///gets
        getIdObra(return _idObra);
        const char* getNombre(){return _nombre;} //string
        const char* getDirector(){return _director;}
        getClasificacion(return _clasifacion);
        Fecha getFecha();

    protected:

    private:
    int  _idObra;
    char _nombre [50];
    char _director[50];
    char _director[50];
    char _genero[30];
    int _clasificacion; //deberia usar enumeracion
    Fecha fechaEstreno;
    int _duracion;
};

#endif // Obra_H
