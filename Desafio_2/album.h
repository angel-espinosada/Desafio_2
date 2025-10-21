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
    string artista;
    int cantidadCanciones;
public:
    Album(string,string,string,string, int,string, string, string,int);
};

#endif // ALBUM_H
