#include <iostream>
using namespace std;

int main() {
    int numeros[6] = {10, 20, 30, 40, 50, 60};

    cout << "Elementos del arreglo:\n";

    for (int i = 0; i < 6; i++) { // Límite correcto: i < 6
        cout << "Posicion [" << i << "] = " << numeros[i] << endl;
    }

    return 0;
}