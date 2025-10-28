#ifndef CANCION_H
#define CANCION_H
#include "artista.h"
#include <cstring>
#include <iostream>
using namespace std;

class cancion:public Artista
{

    char* nombreCancion;
    int idCancion,cantidadReproduccion,duracionCancion, creditos;

public:

    cancion();
    cancion(const char*, const char*, const char*, int, int,
            const char*, int, int, int, int );
    ~cancion();
    void mostrarCancion();
};

#endif // CANCION_H
