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
    int edad;
    int seguidores;
public:
    //Artista();
    Artista(string,string,string,int, int);
    void mostrarArtista();

};

#endif // ARTISTA_H
