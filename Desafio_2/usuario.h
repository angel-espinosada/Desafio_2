#ifndef USUARIO_H
#define USUARIO_H
#include <string>


using namespace std;

class Usuario
{
private:
    string idUser;
    string passId;
    string nombre;
    string ciudad;
    string pais;
    int anio, mes,dia;
    string tipoCuenta;
public:
    Usuario(string,string,string,string,string, int,int, int, string);
    Usuario();
    void iniciarSesion();
    void cargarUsuario();
    void mostrarUsuario();
    void reproducir();
    void seguir();
};

#endif // USUARIO_H
