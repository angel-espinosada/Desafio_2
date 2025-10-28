#include "cancion.h"

cancion::cancion(const char* _codigoArtista, const char* _nombre, const char* _pais,
                 int _edad, int _seguidores,
                 const char* _nombreCancion, int _idCancion,
                 int _cantidadReproduccion, int _duracionCancion, int _creditos)
    : Artista(_codigoArtista, _nombre, _pais, _edad, _seguidores)
{
    nombreCancion = new char[strlen(_nombreCancion) + 1];
    strcpy(nombreCancion, _nombreCancion);

    idCancion = _idCancion;
    cantidadReproduccion = _cantidadReproduccion;
    duracionCancion = _duracionCancion;
    creditos = _creditos;
}

cancion::cancion() : Artista() {
    nombreCancion = new char[50];
    strcpy(nombreCancion, "");

    idCancion = 0;
    cantidadReproduccion = 0;
    duracionCancion = 0;
    creditos = 0;
}
cancion::~cancion() {
    delete[] nombreCancion;
}

void cancion::mostrarCancion() {
    cout << "\n=== DATOS DE LA CANCIÓN ===" << endl;
    cout << "Nombre: " << nombreCancion << endl;
    cout << "ID Canción: " << idCancion << endl;
    cout << "Duración: " << duracionCancion << " segundos" << endl;
    cout << "Reproducciones: " << cantidadReproduccion << endl;
    cout << "Créditos: " << creditos << endl;
}
