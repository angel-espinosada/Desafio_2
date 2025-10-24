#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include "artista.h"
#include <string>


using namespace std;

class Album : public Artista
{
private:
    string codigoAlbum;
    string nombreAlbum;
    string portada;
    string generoAlbum;
    int cantidadCanciones;
public:
    Album();
    Album(string,string,string,int, int,string,  string,string,string,int);

    void mostrarAlbum();
};

#endif // ALBUM_H
