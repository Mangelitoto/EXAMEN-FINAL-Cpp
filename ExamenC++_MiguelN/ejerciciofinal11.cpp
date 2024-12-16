#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Introduce números (ingresa un número negativo para terminar):" << endl;
    do {
        cin >> numero;
        if (numero >= 0) {
            suma += numero;
        }
    } while (numero >= 0);

    cout << "La suma de todos los números ingresados es: " << suma << endl;
    cout <<" ECHO POR MIGUEL NUÑEZ" << endl;
    return 0;
}
