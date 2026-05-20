#include <iostream>
#include <string>
using namespace std;

int main() {
    string productos[5] = {"Arroz", "Leche", "Pan", "Huevos", "Azucar"};
    double precios[5] = {1.50, 0.90, 0.50, 2.00, 1.20};
    string buscar;
    bool encontrado = false;

    cout << "Ingrese el nombre del producto a buscar: ";
    cin >> buscar;

    for (int i = 0; i < 5; i++) {
        if (productos[i] == buscar) {
            cout << "\nProducto encontrado:\n";
            cout << "Nombre: " << productos[i] << endl;
            cout << "Precio: $" << precios[i] << endl;
            encontrado = true;
            break; 
        }
    }

    if (!encontrado) {
        cout << "\nEl producto no existe en la lista." << endl;
    }

    return 0;
}