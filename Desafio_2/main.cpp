#include <iostream>
#include "usuario.h"
#include "artista.h"
#include "album.h"

using namespace std;

int main()
{
    Artista art("00236","Angel", "Colombia", 36,100);
    art.mostrarArtista();
    cout << "Hello World!" << endl;
    system("pause");
    return 0;
}
