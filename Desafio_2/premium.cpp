#include "premium.h"
#include <iostream>
#include <cstring>
using namespace std;

Premium::Premium() : Usuario() {
    cantListas = 0;


    for (int i = 0; i < 5; i++) {
        listas[i][0] = '\0';
    }
}

Premium::Premium(const char* _idUser, const char* _passId, const char* _nombre,
                 const char* _ciudad, const char* _pais,
                 int _anio, int _mes, int _dia,
                 const char* _tipoCuenta, int _cantListas)
    : Usuario(_idUser, _passId, _nombre, _ciudad, _pais, _anio, _mes, _dia, _tipoCuenta) {

    cantListas = _cantListas;


    for (int i = 0; i < 5; i++) {
        listas[i][0] = '\0';
    }
}
