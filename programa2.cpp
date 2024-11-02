#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream archivoEntrada("./destino/data.txt");

    if (!archivoEntrada) {
        cerr << "Error: No se pudo abrir el archivo de datos." << endl;
        return 1;
    }

    string linea, nombre, cedula, correo;

    while (getline(archivoEntrada, linea)) {
        istringstream streamLinea(linea);
        
        streamLinea >> nombre >> cedula >> correo;
        
        cout << "Mi nombre es: " << nombre 
             << ", mi correo es: " << correo 
             << " y mi cedula es: " << cedula << endl;
    }

    archivoEntrada.close();
    return 0;
}
