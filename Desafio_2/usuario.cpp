#include "usuario.h"
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
Usuario::Usuario(const char* _idUser, const char* _passId, const char* _nombre,
                 const char* _ciudad, const char* _pais,
                 int _anio, int _mes, int _dia, const char* _tipoCuenta) {
    idUser = new char[strlen(_idUser) + 1];
    passId = new char[strlen(_passId) + 1];
    nombre = new char[strlen(_nombre) + 1];
    ciudad = new char[strlen(_ciudad) + 1];
    pais = new char[strlen(_pais) + 1];
    tipoCuenta = new char[strlen(_tipoCuenta) + 1];

    strcpy(idUser, _idUser);
    strcpy(passId, _passId);
    strcpy(nombre, _nombre);
    strcpy(ciudad, _ciudad);
    strcpy(pais, _pais);
    strcpy(tipoCuenta, _tipoCuenta);

    anio = _anio;
    mes = _mes;
    dia = _dia;
}

Usuario::Usuario(){

    idUser = new char[50];
    passId = new char[50];
    nombre = new char[50];
    ciudad = new char[50];
    pais = new char[50];
    tipoCuenta = new char[50];

    strcpy(idUser, "");
    strcpy(passId, "");
    strcpy(nombre, "");
    strcpy(ciudad, "");
    strcpy(pais, "");
    strcpy(tipoCuenta, "");

}
Usuario::~Usuario() {
    delete[] idUser;
    delete[] passId;
    delete[] nombre;
    delete[] ciudad;
    delete[] pais;
    delete[] tipoCuenta;
}
void Usuario::mostrarUsuario(){
    cout << "\n===== DATOS DEL USUARIO =====\n";
    cout << "Usuario: " << idUser << endl;
    cout << "Password: " << passId << endl;
    cout << "Tipo: " << tipoCuenta << endl;
    cout << "Ciudad: " << ciudad << endl;
    cout << "Pais: " << pais << endl;
    cout << "Fecha registro: " << anio << "-" << mes << "-" << dia << endl;
}

void Usuario:: iniciarSesion(){
    cargarUsuario();
    string user, pass;

    cout<<"********************************************"<<endl;
    cout<<"****Bienvenido a UdeaTunes****"<<endl;
    cout<<"Inicio de sesion"<<endl;
    cout<<"Ingrese el usuario: "<<endl;
    cin>>user;
    while ( user!=idUser) { //compara las cadenas
        cout << "Error en el usuario" << endl;
        cout << "Ingrese de nuevo el usuario: ";
        cin >> user;
    }
    cout<<"Ingrese la clave"<<endl;
    cin>>pass;
    while(pass!=passId){
        cout<<"Contraseña incorrecta"<<endl;
        cout<<"Ingrese de nuevo la clave"<<endl;
        cin>>pass;

    }
    cout << "Acceso concedido. Bienvenido, " << idUser << "!" <<" Cuenta "<<tipoCuenta<< endl;
}


void Usuario::cargarUsuario(){
    ifstream archivo("user.txt");
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    char linea[200];
    archivo.getline(linea, 200);
    archivo.close();


    char campos[6][50];  //
    int i = 0, j = 0, c = 0;


    while (linea[i] != '\0' && c < 6) {
        if (linea[i] == ';') {
            campos[c][j] = '\0';
            c++;
            j = 0;
        } else {
            campos[c][j] = linea[i];
            j++;
        }
        i++;
    }
    campos[c][j] = '\0';


    strcpy(idUser, campos[0]);
    strcpy(passId, campos[1]);
    strcpy(tipoCuenta, campos[2]);
    strcpy(ciudad, campos[3]);
    strcpy(pais, campos[4]);


    char anioStr[5], mesStr[3], diaStr[3];
    strncpy(anioStr, campos[5], 4);
    anioStr[4] = '\0';
    strncpy(mesStr, campos[5] + 5, 2);
    mesStr[2] = '\0';
    strncpy(diaStr, campos[5] + 8, 2);
    diaStr[2] = '\0';

    anio = atoi(anioStr);
    mes = atoi(mesStr);
    dia = atoi(diaStr);

    cout << "Usuario cargado correctamente.\n";
}



