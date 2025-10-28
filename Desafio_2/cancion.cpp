#include "cancion.h"

cancion::cancion(const char* _codigoArtista, const char* _nombre, const char* _pais,
                 int _edad, int _seguidores,
                 const char* _nombreCancion, int _idCancion,
                 int _cantidadReproduccion, int _duracionCancion, int _creditos)
    : Artista(_codigoArtista, _nombre, _pais, _edad, _seguidores)
{
    nombreCancion = new char[strlen(_nombreCancion) + 1];
    strcpy(nombreCancion, _nombreCancion);

    idCancion = _idCancion;
    cantidadReproduccion = _cantidadReproduccion;
    duracionCancion = _duracionCancion;
    creditos = _creditos;
}

cancion::cancion() : Artista() {
    nombreCancion = new char[50];
    strcpy(nombreCancion, "");

    idCancion = 0;
    cantidadReproduccion = 0;
    duracionCancion = 0;
    creditos = 0;
}
cancion::~cancion() {
    delete[] nombreCancion;
}

void cancion::mostrarCancion() {
    cout << "DATOS DE LA CANCION " << endl;
    cout << "Nombre: " << nombreCancion << endl;
    cout << "ID Cancion: " << idCancion << endl;
    cout << "Duracion: " << duracionCancion << " segundos" << endl;
    cout << "Reproducciones: " << cantidadReproduccion << endl;
    cout << "Creditos: " << creditos << endl;
}
cancion::cancion(const cancion& otra) : Artista(otra) {
    nombreCancion = new char[strlen(otra.nombreCancion) + 1];
    strcpy(nombreCancion, otra.nombreCancion);
    idCancion = otra.idCancion;
    cantidadReproduccion = otra.cantidadReproduccion;
    duracionCancion = otra.duracionCancion;
    creditos = otra.creditos;
}

// Operador de asignación
cancion& cancion::operator=(const cancion& otra) {
    if (this != &otra) {  // Evitar autoasignación
        // Llamar al operador de asignación de la clase base
        Artista::operator=(otra);

        // Liberar memoria anterior
        delete[] nombreCancion;

        // Copiar nueva memoria
        nombreCancion = new char[strlen(otra.nombreCancion) + 1];
        strcpy(nombreCancion, otra.nombreCancion);
        idCancion = otra.idCancion;
        cantidadReproduccion = otra.cantidadReproduccion;
        duracionCancion = otra.duracionCancion;
        creditos = otra.creditos;
    }
    return *this;
}

void cancion::reproducirPremium() {

    cout << "REPRODUCCION PREMIUM" << endl;


    // SIN PUBLICIDAD

    cout << "Cantante: ";
    mostrarNombre();  // De la clase Artista
    cout << "Album: [Album]" << endl;
    cout << "Ruta a la portada del album: /images/album_hd.png" << endl;

    cout << "Titulo: " << nombreCancion << endl;
    cout << "Ruta audio (320kbps): /music/hq/" << nombreCancion << ".ogg" << endl;
    cout << "Duracion: " << duracionCancion / 60 << ":"
         << duracionCancion % 60 << " min" << endl;
    cout << "Reproducciones: " << cantidadReproduccion << endl;

    cout << "OPCIONES PREMIUM:" << endl;
    cout << "1.- Reproducir en HD" << endl;
    cout << "2.- Descargar (offline)" << endl;
    cout << "3.- Agregar a playlist" << endl;
    cout << "4.- Compartir" << endl;
    cout << "5.- Siguiente" << endl;
    cout << "6.- Anterior" << endl;
    cout << "7.- Detener" << endl;
    cout << "8.- Volver al menú" << endl;

    int opcion;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
    case 1:
        cout << "Reproduciendo en calidad HD..." << endl;
        cantidadReproduccion++;
        cout << "Audio sin compresión - 320kbps" << endl;
        break;
    case 2:
        cout << "Descargando para escuchar offline..." << endl;
        break;
    case 3:
        cout << "Agregada a tu playlist" << endl;
        break;
    case 4:
        cout << "Compartir: udeatunes.com/song/" << idCancion << endl;
        break;
    case 5:
        cout << "️Siguiente cancion" << endl;
        break;
    case 6:
        cout << "️Canción anterior" << endl;
        break;
    case 7:
        cout << "Reproduccion detenida" << endl;
        break;
    case 8:
        cout << "Volviendo al menu..." << endl;
        break;
    default:
        cout << "Opción inválida" << endl;
    }
}

void cancion::reproducirEstandar() {

    cout << "REPRODUCCION ESTANDAR" << endl;


    // CON PUBLICIDAD
    cout << "PUBLICIDAD" << endl;


    cout << "Esperando publicidad";
    for (int i = 0; i < 5; i++) {
        cout << "." << flush;
        // Puedes agregar delay aquí
    }
    cout << ")\n" << endl;

    cout << "Cantante: ";
    mostrarNombre();
    cout << "Album: [Álbum]" << endl;
    cout << "Ruta a la portada: /images/album_standard.png" << endl;

    cout << "Titulo: " << nombreCancion << endl;
    cout << "Ruta audio (128kbps): /music/standard/" << nombreCancion << ".ogg" << endl;
    cout << "Duracion: " << duracionCancion / 60 << ":"
         << duracionCancion % 60 << " min" << endl;

    cout << "OPCIONES:" << endl;
    cout << "1.- Reproducir" << endl;
    cout << "2.- Detener" << endl;
    cout << "3.- Siguiente" << endl;
    cout << "4.- Anterior" << endl;
    cout << "5.-Actualizar a Premium" << endl;
    cout << "6.- Volver al menú" << endl;

    int opcion;
    cout << "Opcion: ";
    cin >> opcion;

    switch(opcion) {
    case 1:
        cout << "Reproduciendo (calidad estándar - 128kbps)..." << endl;
        cantidadReproduccion++;
        break;
    case 2:
        cout << "Detenido" << endl;
        break;
    case 3:
        cout << "Siguiente (con publicidad)" << endl;
        break;
    case 4:
        cout << "Anterior" << endl;
        break;
    case 5:
        cout << "ACTUALIZAR A PREMIUM" << endl;
        cout << "Contacta al administrador para mejorar tu cuenta" << endl;
        cout << "Email: premium@udeatunes.com" << endl;
        break;
    case 6:
        cout << "Volviendo al menu..." << endl;
        break;
    default:
        cout << "Opción invalida" << endl;
    }

    // Publicidad adicional al finalizar para estándar
    if (opcion != 6) {
        cout << "Tip: Con Premium, disfruta sin interrupciones" << endl;
    }
}
