#ifndef CANCION_H
#define CANCION_H
#include "artista.h"


class cancion:public Artista
{

    string nombreCancion;
    int idCancion,cantidadReproduccion,duracionCancion, creditos;

public:
    cancion();
};

#endif // CANCION_H
