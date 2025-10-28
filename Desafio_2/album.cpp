#include "album.h"
#include <iostream>
#include <cstring>
using namespace std;

Album::Album(const char* _codigoArtista, const char* _nombre, const char* _pais,
             int _edad, int _seguidores,
             const char* _codigoAlbum, const char* _nombreAlbum,
             const char* _portada, const char* _generoAlbum, int _cantidadCanciones)
    : Artista(_codigoArtista, _nombre, _pais, _edad, _seguidores) {

    codigoAlbum = new char[strlen(_codigoAlbum) + 1];
    nombreAlbum = new char[strlen(_nombreAlbum) + 1];
    portada = new char[strlen(_portada) + 1];
    generoAlbum = new char[strlen(_generoAlbum) + 1];

    strcpy(codigoAlbum, _codigoAlbum);
    strcpy(nombreAlbum, _nombreAlbum);
    strcpy(portada, _portada);
    strcpy(generoAlbum, _generoAlbum);

    cantidadCanciones = _cantidadCanciones;
}

Album::Album() : Artista() {
    codigoAlbum = new char[50];
    nombreAlbum = new char[50];
    portada = new char[100];
    generoAlbum = new char[50];

    strcpy(codigoAlbum, "");
    strcpy(nombreAlbum, "");
    strcpy(portada, "");
    strcpy(generoAlbum, "");

    cantidadCanciones = 0;
}

Album::~Album() {
    delete[] codigoAlbum;
    delete[] nombreAlbum;
    delete[] portada;
    delete[] generoAlbum;
}

void Album::mostrarAlbum() {
    cout << " DATOS DEL ALBUM" << endl;
    cout << "Codigo album: " << codigoAlbum << endl;
    cout << "Nombre album: " << nombreAlbum << endl;
    cout << "Genero: " << generoAlbum << endl;
    cout << "Portada: " << portada << endl;
    cout << "Cantidad de canciones: " << cantidadCanciones << endl;
}
