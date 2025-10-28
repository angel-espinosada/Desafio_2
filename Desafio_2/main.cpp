#include <iostream>
#include "usuario.h"
#include "artista.h"
#include "album.h"

using namespace std;

int main() {
    Usuario usuario;
    usuario.iniciarSesion();    // carga y valida usuario
    usuario.mostrarUsuario();   // muestra los datos

    Artista art("00236", "Angel", "Colombia", 36, 100);
    art.mostrarArtista();

    cout << "\nFin del programa\n";
    system("pause");  // o cin.get();
    return 0;
}
