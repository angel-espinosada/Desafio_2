#ifndef PREMIUM_H
#define PREMIUM_H
#include "usuario.h"


class Premium:public Usuario
{private:
    int cantListas;
    char listas[10][50];
public:
    Premium();
    Premium(const char*, const char*, const char*, const char*, const char*, int, int, int, const char*, int);

    void seguirListas();
    void mostrarListas();
    void reproducir();
    ~Premium();

};

#endif // PREMIUM_H
