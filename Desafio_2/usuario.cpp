#include "usuario.h"
#include <iostream>
#include <cstring>

Usuario::Usuario(string _idUser,string _pssID,string _nombre,
                 string _ciudad,string _pais, int _anio,int _mes, int _dia, string _tipoCuenta) {
    idUser=_idUser;
    passId=_pssID;
    nombre=_nombre;
    ciudad=_ciudad;
    pais=_pais;
    anio=_anio;
    mes=_mes;
    dia=_dia;
    tipoCuenta=_tipoCuenta;

}

Usuario::Usuario(){


}
void Usuario::mostrarUsuario(){


}

void Usuario:: iniciarSesion(){
    char userdata[50]="Admin";
    char passdata[50]="12345";

    char user[50];
    char pass[50];
    cout<<"********************************************"<<endl;
    cout<<"****Bienvenido a UdeaTunes****"<<endl;
    cout<<"Inicio de sesion"<<endl;
    cout<<"Ingrese el usuario: "<<endl;
    cin>>user;
    while (strcmp(user, userdata) != 0) { //compara las cadenas
        cout << "Error en el usuario" << endl;
        cout << "Ingrese de nuevo el usuario: ";
        cin >> user;
    }
    cout<<"Ingrese la clave"<<endl;
    cin>>pass;
    while(strcmp(passdata,pass)!=0){
        cout<<"Contraseña incorrecta"<<endl;
        cout<<"Ingrese de nuevo la clave"<<endl;
        cin>>pass;

    }
    cout << "Acceso concedido. Bienvenido, " << user << "!" << endl;
}
