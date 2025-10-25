#include "premium.h"

Premium::Premium(string _idUser,string _pssID,string _nombre,
                 string _ciudad,string _pais, int _anio,int _mes, int _dia,
                 string _tipoCuenta,int _cantListas, string _listas):Usuario(_idUser, _pssID, _nombre, _ciudad,
              _pais,  _anio, _mes,  _dia,  _tipoCuenta) {

    cantListas=_cantListas;
    listas=new string[cantListas];
}


