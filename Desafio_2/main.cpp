#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib> // para rand()
#include <ctime>   // para time()
#include "usuario.h"
#include "premium.h"
#include "estandar.h"
#include "cancion.h"
#include "artista.h"
#include "album.h"


using namespace std;
cancion* cargarCanciones(const char* nombreArchivo, int& total);

int main() {
    srand(time(NULL));

    Usuario usuario;
    usuario.iniciarSesion();
    usuario.mostrarUsuario();

    char* tipo = usuario.gettipoCuenta();
    int total = 0;
    cancion* biblioteca = cargarCanciones("biblioteca_musica.txt", total);

    if (biblioteca != nullptr) {

        if (strcmp(tipo, "Premium") == 0) {
            cout << "CUENTA PREMIUM ACTIVA" << endl;

            // Mostrar todas las canciones
            for (int i = 0; i < total; i++) {
                biblioteca[i].mostrarCancion();
            }

            // Reproducir aleatoria
            int aleatoria = rand() % total;
            cout << " Reproducción aleatoria:" << endl;
            biblioteca[aleatoria].reproducirPremium();  // MÉTODO PREMIUM

        } else if (strcmp(tipo, "Estandar") == 0) {
            cout << "CUENTA ESTÁNDAR" << endl;

            // Mostrar solo 3 canciones
            int limite = (total < 3) ? total : 3;
            for (int i = 0; i < limite; i++) {
                biblioteca[i].mostrarCancion();
            }

            // Reproducir aleatoria de las limitadas
            int aleatoria = rand() % limite;
            cout << "Reproducción aleatoria:" << endl;
            biblioteca[aleatoria].reproducirEstandar();  // MÉTODO ESTÁNDAR
        }

        delete[] biblioteca;
    }

    system("pause");
    return 0;
}


cancion* cargarCanciones(const char* nombreArchivo, int& total) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cout << "No se pudo abrir el archivo de canciones." << endl;
        total = 0;
        return nullptr;
    }

    char* linea = new char[512];
    total = 0;

    while (archivo.getline(linea, 512)) {
        total++;
    }

    if (total == 0) {
        cout << "Archivo vacío." << endl;
        delete[] linea;
        archivo.close();
        return nullptr;
    }

    archivo.clear();
    archivo.seekg(0);

    cancion* lista = new cancion[total];
    int index = 0;

    while (archivo.getline(linea, 512) && index < total) {
        char** campos = new char*[10];
        for (int k = 0; k < 10; k++) {
            campos[k] = new char[256];
        }

        int i = 0, j = 0, c = 0;

        while (linea[i] != '\0' && c < 10) {
            if (linea[i] == ';') {
                campos[c][j] = '\0';
                c++;
                j = 0;
            } else {
                if (j < 255) {
                    campos[c][j] = linea[i];
                    j++;
                }
            }
            i++;
        }
        campos[c][j] = '\0';

        cancion temp(
            campos[0],
            campos[3],
            "Desconocido",
            0, 0,
            campos[1],
            atoi(campos[0]),
            atoi(campos[8]),
            atoi(campos[2]),
            100
            );

        lista[index] = temp;


        for (int k = 0; k < 10; k++) {
            delete[] campos[k];
        }
        delete[] campos;

        index++;
    }

    delete[] linea;
    archivo.close();
    cout << "Se cargaron " << total << " canciones correctamente.\n";
    return lista;
}
