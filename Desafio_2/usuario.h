#ifndef USUARIO_H
#define USUARIO_H





class Usuario
{
private:
    char *idUser;
    char *passId;
   char *nombre;
    char *ciudad;
    char *pais;
    int anio, mes,dia;
    char *tipoCuenta;
public:
    Usuario(const char*,const char*,const char*,const char*,const char* , int,int, int, const char*);
    Usuario();
    ~Usuario();
    void iniciarSesion();
    void cargarUsuario();
    void mostrarUsuario();
    void reproducir();
    void seguir();
    char * getidUser();
    char* getpassId();
    char* gettipoCuenta();
};

#endif // USUARIO_H
