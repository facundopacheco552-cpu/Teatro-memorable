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
        setAutor(const char *valor){strcopy(_autor, valor);}
        setPuntuacion(int );
        setGenero(int );



        ///gets
        getIdObra(return _idObra);
        const char* getNombre(){return _nombre;} //string
        const char* getAutor(){return _autor;}
        getPuntuacion(return _puntuacion);
        Fecha getFecha();

    protected:

    private:
    int  _idObra;
    char _nombre [50];
    char _autor[50];
    int _genero;
    int _cantidadActors;
    Fecha fechaPublicacion;
    float _costoEstimado;
    int  _puntuacion;
};

#endif // Obra_H
