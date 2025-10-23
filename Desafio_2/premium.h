#ifndef PREMIUM_H
#define PREMIUM_H
#include "usuario.h"


class Premium:public Usuario
{
    int cantListas;
    string listas;
public:
    Premium();
    Premium(string, string, string, string, string, int, int, int, string,int, string);

    void seguirListas();
    void reproducir();

};

#endif // PREMIUM_H
