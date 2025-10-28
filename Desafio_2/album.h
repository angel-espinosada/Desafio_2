#ifndef ALBUM_H
#define ALBUM_H

#include "artista.h"
#include <cstring>
#include <iostream>
using namespace std;

class Album : public Artista {
private:
    char* codigoAlbum;
    char* nombreAlbum;
    char* portada;
    char* generoAlbum;
    int cantidadCanciones;
public:
    Album(); // constructor vacío
    Album(const char*, const char*, const char*, int, int,
          const char*, const char*, const char*, const char*, int); // con parámetros
    ~Album(); // destructor

    void mostrarAlbum();
};

#endif // ALBUM_H
