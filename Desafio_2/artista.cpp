#include "artista.h"
#include <iostream>

Artista::Artista(const char* _codigoArtista, const char* _nombre, const char* _pais, int _edad, int _seguidores) {
    codigoArtista = new char[strlen(_codigoArtista) + 1];
    nombre = new char[strlen(_nombre) + 1];
    pais = new char[strlen(_pais) + 1];

    strcpy(codigoArtista, _codigoArtista);
    strcpy(nombre, _nombre);
    strcpy(pais, _pais);

    edad = _edad;
    seguidores = _seguidores;
}

Artista::Artista() {
    codigoArtista = new char[50];
    nombre = new char[50];
    pais = new char[50];

    strcpy(codigoArtista, "");
    strcpy(nombre, "");
    strcpy(pais, "");

    edad = 0;
    seguidores = 0;
}

// Destructor
Artista::~Artista() {
    delete[] codigoArtista;
    delete[] nombre;
    delete[] pais;
}


void Artista::mostrarArtista(){


    cout << "=== DATOS DEL ARTISTA ===" << endl;
    cout << "Codigo: " << codigoArtista << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Pais: " << pais << endl;
    cout << "Edad: " << edad << endl;
    cout << "Seguidores: " << seguidores << endl;
}
