#ifndef ARTISTA_H
#define ARTISTA_H
#include <string>


using namespace std;
class Artista
{
private:
    string codigoArtista;
    string nombre;
    string pais;
    string edad;
    int seguidores;
public:
    Artista(string,string,string,string, int);
    void mostrarArtista();

};

#endif // ARTISTA_H
