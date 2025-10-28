#ifndef ARTISTA_H
#define ARTISTA_H

#include <cstring>
#include <iostream>


using namespace std;
class Artista
{
private:
    char* codigoArtista;
    char* nombre;
    char* pais;
    int edad;
    int seguidores;
public:
    Artista();
    Artista(const char*, const char*, const char*, int, int);
    ~Artista();
    void mostrarArtista();

};

#endif // ARTISTA_H
