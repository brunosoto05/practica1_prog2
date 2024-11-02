#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int cantidadRegistros;
    string nombreUsuario;
    int idUsuario;
    string emailUsuario;

    cout << "Ingrese el numero de registros que desea agregar: ";
    cin >> cantidadRegistros;

    ofstream archivo("./destino/Data.txt");
    if (!archivo) {
        cerr << "No se pudo crear el archivo." << endl;
        return 1;
    }

    for (int i = 1; i <= cantidadRegistros; ++i) {
        cout << "Registro #" << i << endl;
        
        cout << "Nombre: ";
        cin >> ws; // Ignora cualquier espacio en blanco antes de leer la entrada
        getline(cin, nombreUsuario);

        cout << "ID (cedula): ";
        cin >> idUsuario;

        cout << "Correo electronico: ";
        cin >> emailUsuario;

        archivo << nombreUsuario << " " << idUsuario << " " << emailUsuario << endl;

        cout << "Registro agregado correctamente." << endl;
    }

    archivo.close();
    cout << "Todos los registros se han guardado en 'Data.txt'." << endl;

    return 0;
}
