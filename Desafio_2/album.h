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
    int cantidadCanciones;
public:
    Album(string,string,string,int, int,string,  string,int);
    void mostrarAlbum();
};

#endif // ALBUM_H
