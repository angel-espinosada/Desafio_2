#include "artista.h"
#include <iostream>

Artista::Artista(string _codigoArtista,string _nombre,string _pais,int _edad, int _seguidores) {

    codigoArtista=_codigoArtista;
    nombre=_nombre;
    pais=_pais;
    edad= _edad;
    seguidores=_seguidores;

}



void Artista::mostrarArtista(){


    cout<<"Datos del artista "<<nombre<<" de "<<pais<<endl;
}
