#include "cancion.h"

cancion::cancion(string _codigoArtista,string _nombre,string _pais,int _edad,
                 int _seguidores, string _nombreCancion,int _idCancion, int _cantidadReproduccion, int _duracionCancion,
                 int _creditos ):Artista(_codigoArtista, _nombre, _pais, _edad, _seguidores) {


    nombreCancion=_nombreCancion;
    idCancion=_idCancion;
    cantidadReproduccion=_cantidadReproduccion;
    duracionCancion=_duracionCancion;
    creditos=_creditos;
}



