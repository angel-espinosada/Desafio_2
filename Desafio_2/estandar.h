#ifndef ESTANDAR_H
#define ESTANDAR_H
#include "usuario.h"


class Estandar:public Usuario
{
private:

    char* listPublicidad;
    int cantidadPublicidad;

public:
    Estandar();
    Estandar(const char*, const char*, const char*, const char*, const char*, int, int, int, const char*, int);
    void mostrarPublicidad();
    ~Estandar();
};
#endif // ESTANDAR_H
