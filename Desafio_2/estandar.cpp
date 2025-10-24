#include "estandar.h"

Estandar::Estandar(string _idUser,string _pssID,string _nombre,
                   string _ciudad,string _pais, int _anio,int _mes, int _dia,
                   string _tipoCuenta, string _listPublicidad, int _cantidadPublicidad):Usuario(_idUser, _pssID, _nombre, _ciudad,
              _pais,  _anio, _mes,  _dia,  _tipoCuenta) {

listPublicidad= _listPublicidad;
cantidadPublicidad=_cantidadPublicidad;


}
