#include "usuario.h"
#include <iostream>
#include <cstring>
#include <fstream>

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
    char tipoCuenta[50]="Pemium";

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
    cout << "Acceso concedido. Bienvenido, " << user << "!" <<"Cuenta"<<tipoCuenta<< endl;
}

void Usuario::cargarUsuario(){
    ifstream archivo("user.txt");
    if (!archivo.is_open()){
        cout<<"No se pudo abrir el archivo";
        return;
    }
    cout<<"Archivo cargado";
    string linea;

    // Leemos una línea del archivo
    getline(archivo, linea);

    int i = 0;
    string campos[10];
    string acumulador = "";

    // Cortamos manualmente por ';'
    for (int j = 0; j < linea.length(); j++) {
        if (linea[j] == ';') {
            campos[i] = acumulador;
            acumulador = "";
            i++;
        } else {
            acumulador += linea[j];
        }
    }
    campos[i] = acumulador; // último campo


    idUser = campos[0];
    passId = campos[1];
    tipoCuenta = campos[2];
    ciudad = campos[3];
    pais = campos[4];


    string fecha = campos[5];
    anio = stoi(fecha.substr(0, 4));
    mes = stoi(fecha.substr(5, 2));
    dia = stoi(fecha.substr(8, 2));

    cout << "Usuario cargado correctamente.\n";
    archivo.close();
}



