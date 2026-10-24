#pragma once


class Obra
{
    public:
        Obra();
        virtual ~Obra();

        ///sets
        void setIdObra(int );
        void setNombre(const char *valor){strcpy( _nombre,valor);}//convierte un string en para poner dentro del
        void setGenero(const char *valor){strcopy(_genero, valor);}
        void setAutor(const char *valor){strcopy(_autor, valor);}
        void setPuntuacion(int );
        void setGenero(int );
        void setFecha(Fecha fecha);
        void setCosto(float );
        void setPuntuacion(int );

        ///gets
        int getIdObra(return _idObra);
        const char* getNombre(){return _nombre;} //string
        const char* getAutor(){return _autor;}
        int getGenero (return _genero);
        int getCantActores(return _cantidadActores);
        int getPuntuacion(return _puntuacion);
        Fecha getFecha();
        float getCosto(return _costoEstimado);
        int  getPuntuacion(return _puntuacion);

    protected:

    private:
    int  _idObra;
    char _nombre [50];
    char _autor[50];
    int _genero;
    int _cantidadActores;
    Fecha fechaPublicacion;
    float _costoEstimado;
    int  _puntuacion;
};

