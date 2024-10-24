#pragma once
#include <Vector.hpp>
#include <SerieNavidad.hpp>


class Lienzo
{
private:
    Vector posicion;
    Vector tamanio;
public:
    Lienzo(Vector p, Vector t) {
        this->posicion = p;
        this->tamanio = t;
    }
    ~Lienzo() {}

    void Dibujar(SerieNavidad serie){
        serie.Imprimir();
    }

    void Limpiar(){
        system("clear");
    }
};