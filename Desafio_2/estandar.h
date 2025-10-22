#ifndef ESTANDAR_H
#define ESTANDAR_H
#include "usuario.h"



using namespace std;
class Estandar:public Usuario
{
private:

    string listPublicidad;
    int cantidadPublicidad;

public:
    Estandar();
    Estandar(string, string, string, string, string, int, int, int, string, string, int);
    void mostraPublicidad();
};

#endif // ESTANDAR_H
