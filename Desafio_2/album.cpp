#include "album.h"

Album::Album(string _codigoArtista,string _nombre,string _pais,int _edad, int _seguidores,
             string _codigoAlbum,string _nombreAlbum,string _portada, string _generoAlbum,int _cantidadCanciones ):Artista( _codigoArtista, _nombre, _pais, _edad, _seguidores) {

    codigoAlbum=_codigoAlbum;
    nombreAlbum=_nombreAlbum;
    portada=_portada;
    generoAlbum=_generoAlbum;
    cantidadCanciones=_cantidadCanciones;

}
string codigoAlbum;
string nombreAlbum;

int cantidadCanciones;
